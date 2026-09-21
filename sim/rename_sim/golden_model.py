import random as rand

RS_NUM = 32
cycles = 2
parallelism = 4

class FRM:
    def __init__ (self, size):
        self._map = [{"ptr": i, "free": 1} for i in range(size)]

    def arb_in(self):
        for idx, row in enumerate(self._map):
            if(row):
                if(row["free"]  == 1 ): 
                    return idx

    def update_map(self, Rs, Rs_rn):
        self._map[Rs]["ptr"] = Rs_rn


class free_list_map:
    def __init__ (self, size):
        self._map = [0 for i in range(size)]

    def arb_in(self):
        for idx, row in enumerate(self._map):
            if(not row):
                print("Printing row in arb_in func: ", idx)
                self._map[idx] = 1
                return idx

    def rand_free(self):
        for i, row in enumerate(self._map):
            if(self._map[i]):
                rand_cond = rand.random()
                if(rand_cond > 0.7):
                    self._map[i] = 0
                    print("Freed up register: ", i, " in free_list_map")
                    return i
        return None

    def free (self, idx):
        self._map[idx] = 0

    def print(self):
        for idx, row in enumerate(self._map):
            print(row)


rand.seed(3701)
uops = [[{"Rd": rand.randint(1,RS_NUM-1), "Rs1": rand.randint(1,RS_NUM-1), "Rs2": rand.randint(1,RS_NUM-1)} for j in range(parallelism)] for i in range(cycles)]

_free_uop_list_map = free_list_map(RS_NUM)
_free_list_map = free_list_map(RS_NUM)
_FRM = FRM(RS_NUM)
_FRMuop = FRM(RS_NUM)


for cycle in range(cycles):
    renamed_uop = [{"Rd": 0, "Rd_rn": 0, "Rs1": 0, "Rs1_rn": 0, "Rs2": 0, "Rs2_rn": 0} for i in range(parallelism)]

    renamed_uop[0]["Rs1_rn"] = _FRM._map[uops[cycle][0]["Rs1"]]["ptr"]
    renamed_uop[0]["Rs2_rn"] = _FRM._map[uops[cycle][0]["Rs2"]]["ptr"]
    #renamed_uop[-1]["Rd_rn"] = _free_list_map.arb_in()

    _FRM.update_map(uops[cycle][-1]["Rd"] , renamed_uop[-1]["Rd_rn"])

    for idx, uop in enumerate(uops[cycle]):

        
        renamed_uop[idx]["Rd"] = uop["Rd"]
        renamed_uop[idx]["Rs1"] = uop["Rs1"]
        renamed_uop[idx]["Rs2"] = uop["Rs2"]

        if(idx != 0 ):
            renamed_uop[idx]["Rs1_rn"] = _FRMuop._map[renamed_uop[idx]["Rs1"]]["ptr"]
            renamed_uop[idx]["Rs2_rn"] = _FRMuop._map[renamed_uop[idx]["Rs2"]]["ptr"]
        if(idx != parallelism-1):
            print("Cycle : ", cycle)
            renamed_uop[idx]["Rd_rn"] = _free_uop_list_map.arb_in() + 1
            print("--------------")
        #This needs to implement bypass as most of the reading will be done while writing

        _FRMuop.update_map(renamed_uop[idx]["Rd"], renamed_uop[idx]["Rd_rn"])

    _free_uop_list_map.print()
    _free_uop_list_map.rand_free()
    _free_uop_list_map.print()
    print("Printing renamed uop: ", renamed_uop)

