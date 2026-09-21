import random as rand
import sys 

#TEST SPECS
UOPS_NUM = 10
RAND = True

#ARCHITECTURE SPECS
RS_NUM = 7
W_RS = 1
D_RS = 8
TOTAL_MATRIX_DIM = RS_NUM*W_RS*2*D_RS
CELL_PER_TILE = 4
ROW_PER_TILE = D_RS//CELL_PER_TILE
TILE_NUM = TOTAL_MATRIX_DIM//4
TILES_PER_RS = D_RS//ROW_PER_TILE
ROW_PER_TILE = CELL_PER_TILE//(W_RS*2)
SUPERSCALARITY = 1
TT_DEPTH = TILE_NUM


class Reserve_Station:
    """ after writing Rs1 and Rs2 return its ID
        + entry ID """
    W = W_RS
    D = D_RS
    def __init__ (self, ID):
        self.ID = ID << 16
        self.content = [{"Entry_free" : 1, "Entry" : {"Valid1" : 0, "Rs1" : 0, "Valid2" : 0,  "Rs2": 0}} for __ in range(self.D)]

    def arb_in(self):
        for idx, row in enumerate(self.content):
            if(row):
                if(row["Entry_free"]  == 1 ): # Significa che la entry e vuota e puo essere scritta
                    return idx

    def write_entry(self, Rs1, Rs2):
        free_entry_idx = self.arb_in()
        self.content[free_entry_idx]["Entry"]["Rs1"] = Rs1 
        self.content[free_entry_idx]["Entry"]["Rs2"] = Rs2 
        self.content[free_entry_idx]["Entry_free"] = 0
        return free_entry_idx, self.ID
    
    def print_pretty(self):
        for row in self.content:
            print(row)
        print()

class Encoder:
    def __init__ (self):
        self.encoded_data1 = 0
        self.encoded_data2 = 0
        self.upper_lower = 0
        #self.LUT = [i//2 for i in range(TILE_NUM*2) ]

    def encode(self, RS_ID, RS_ENTRY_ID, uOp):
        #print("===============================")
        #print("Printing encoding input information, id, entry id, uop")
        #print(RS_ID >> 16, RS_ENTRY_ID, uOp)
        id_enc = (RS_ID >> 16) << (TILES_PER_RS//2)
        entry_id = RS_ENTRY_ID
        tile_encoded = id_enc + (entry_id >> ROW_PER_TILE//2)
        #tile_encoded = self.LUT[tile_ptr]

        upper_lower = entry_id%ROW_PER_TILE             #Questo indica se la vista della tile di R1 sara upper o lower
                                                        #upper_lower = 1, dato spedito = [1, 0]
                                                        #Data salvato nella tile table = [1, 0, 0, 0]
                                                        #upper_lower = 0, dato spedito = [1, 0]
                                                        #Data salvato nella tile table = [0, 0, 1, 0]
        #print("Printing encoded internal information: id enc, entry id, tile ptr, tile encoded")
        #print(id_enc, entry_id, tile_encoded)
        #print("===============================")
        #print()
        Rs1 = uOp[0]
        Rs2 = uOp[1]
        Rs1_tile_view = [1, 0] 
        Rs2_tile_view = [0, 1] 
        self.encoded_data1 = {"Rs" : Rs1, "Tile_ptr" : tile_encoded, "Tile view" : Rs1_tile_view}
        self.encoded_data2 = {"Rs" : Rs2, "Tile_ptr" : tile_encoded, "Tile view" : Rs2_tile_view}    
        if(Rs1 == Rs2):
            Rs1_tile_view = [1, 1]
            self.encoded_data2 = self.encoded_data2
        self.upper_lower = upper_lower                  #Questo e condiviso dalla entry

    def get_encoded_data(self):
        return self.encoded_data1, self.encoded_data2, self.upper_lower
    
    def print_pretty(self):
        print(self.encoded_data1)
        print(self.encoded_data2)
        print(self.upper_lower)
        print()

class TileTable:
    def __init__ (self):
        self.content = [{"Free" : 1, "Rs" : 0, "Tile_ptr" : 999, "Tile view" : [0, 0, 0, 0]} for _ in range(TT_DEPTH)]

    def write_entry(self, encoded_data, upper_lower):
        match_found = 0
        for idx, i in enumerate(self.content):
            if(i["Rs"] == encoded_data["Rs"] and i["Tile_ptr"] == encoded_data["Tile_ptr"]):
                match_found = 1
                if(not(upper_lower)):
                    self.content[idx]["Tile view"][0:W_RS*2] = self.merge_non_zero_list(encoded_data["Tile view"], self.content[idx]["Tile view"][0:W_RS*2])
                else:
                    self.content[idx]["Tile view"][W_RS*2:] = self.merge_non_zero_list(encoded_data["Tile view"], self.content[idx]["Tile view"][W_RS*2:])
        if(not(match_found)):
            free_entry_idx = self.arb_in()
            if(not(upper_lower)):
                self.content[free_entry_idx]["Free"] = 0
                self.content[free_entry_idx]["Rs"] = encoded_data["Rs"]
                self.content[free_entry_idx]["Tile_ptr"] = encoded_data["Tile_ptr"]
                self.content[free_entry_idx]["Tile view"][0:W_RS*2] = encoded_data['Tile view']
            else:
                self.content[free_entry_idx]["Free"] = 0
                self.content[free_entry_idx]["Rs"] = encoded_data["Rs"]
                self.content[free_entry_idx]["Tile_ptr"] = encoded_data["Tile_ptr"]
                self.content[free_entry_idx]["Tile view"][W_RS*2:] = encoded_data["Tile view"]
    def print_pretty(self):                
        for row in self.content:
            print(row)
        print()

    def print_non_empty(self):
        for row in self.content:
            if(row["Free"]==0):
                print(row)
        print()

    def arb_in(self):
        for idx, row in enumerate(self.content):
            if(row):
                if(row["Free"]  == 1 ): # Significa che la entry e vuota e puo essere scritta
                    return idx

    def merge_non_zero_list(self, list1, list2):
        """Suppongo che la lista 1 e sempre piu piccola della lista 2"""
        for idx, i in enumerate(list1):
            if(i == 1): 
                list2[idx] = 1
        return list2

# Gli ID delle reserve station iniziano da 0 per poi passare direttamente a 32
# Come da system verilog


if __name__ == "__main__":
    RSs = []
    uOps = []
    Enc = Encoder()
    TT = TileTable()
    if(RAND):
        rand.seed(3701)
        uOps = [[rand.randint(0,RS_NUM), ["Rs"+str(rand.randint(0,10)), "Rs"+str(rand.randint(0,10))]] for _ in range(UOPS_NUM) ]
        for _ in range(RS_NUM):
            rs = Reserve_Station(_)
            RSs.append(rs)

    for uOp in uOps:
        source_regs = uOp[1]
        op = uOp[0] 
        entry_id, rs_id = RSs[op].write_entry(source_regs[0], source_regs[1])
        Enc.encode(rs_id, entry_id, source_regs)
        encoded_data1, encoded_data2, upper_lower = Enc.get_encoded_data()
        TT.write_entry(encoded_data1, upper_lower)
        TT.write_entry(encoded_data2, upper_lower)

    for idx, rs in enumerate(RSs):
        print("Rs", idx)
        rs.print_pretty()
        print()
    TT.print_non_empty()
    #TT.print_pretty()
