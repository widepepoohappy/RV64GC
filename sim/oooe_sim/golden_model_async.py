import json
import sys
import copy
from py_utils.py_utils import *

cycles = 12
parallelism = 4
flagging_error = 0
PRF_ENTRIES = 32
PRINT_GOLDEN = 1

PRF_content = [(0, 0) for _ in range(PRF_ENTRIES)]
PRF_content_per_cycle = []

def tick():
    PRF_content[cycle1] = copy.deepcopy(PRF_content[cycle0])
    return 0

def check_dependencies(Rs1, Rs2, Rd, cycle):
    if (cycle < 2):
        return False
    for uop_dest in range(parallelism):
        if(Rs1 == Rd[uop_dest] and Rs2 == Rd[uop_dest]):
            return True
        elif(Rs1 == Rd[uop_dest]):
            return True
        elif(Rs2 == Rd[uop_dest]):
            return True
    return False


def golden_model(Rs1, Rs2, is_imm: bool, Imm, Rd,  op, cycle,  uOp):
    """
    Restituisce (ready, result):
      - ready: True se i prerequisiti di validità sono soddisfatti
      - result: il valore calcolato se ready=True, altrimenti None
    """
    # helper per leggere una cella con l'eccezione su reg 0
    def read_cell(reg):
        if reg == 0:
            return 0, True  # eccezione: x0 è sempre valido e vale 0
        val, valid = PRF_content[reg]
        return val, bool(valid)

    v1, ok1 = copy.deepcopy(read_cell(Rs1))
    v2, ok2 = copy.deepcopy(read_cell(Rs2))

    # Condizione di prontezza:
    # - se is_imm: serve solo ok1
    # - altrimenti: ok1 e ok2
    ready = ok1 and (is_imm or ok2)
    #print(f"Printing prf content in golden model function\t", PRF_content
    # Valore: v1 + (v2 se non immediato) + (Imm se immediato)
    if (ready):
        print(" Cycle: [", cycle, end = ' ] ' )
        match op:
                case 0:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) + {Rs2} (Rs2) + {Imm*is_imm} (Imm): " + f"{v1} + {(v2*(not is_imm))} + {(Imm* is_imm)} = ", (v1 + (v2 * (not is_imm)) + (Imm * is_imm)) )
                    results = (v1 + (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 1:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) - {Rs2} (Rs2) - {Imm*is_imm} (Imm): " + f"{v1} - {(v2*(not is_imm))} - {(Imm* is_imm)} = ", (v1 - (v2 * (not is_imm)) - (Imm * is_imm)) )
                    results = (v1 - (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 2:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) &  {Rs2} (Rs2)  &  {Imm*is_imm} (Imm): " + f"{v1} & {(v2*(not is_imm))} & {(Imm* is_imm)} = ", (v1 & (v2 * (not is_imm))  &  (Imm * is_imm)) )
                    results = (v1 & (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 3:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) | {Rs2} (Rs2) | {Imm*is_imm} (Imm): " + f"{v1} | {(v2*(not is_imm))} | {(Imm* is_imm)} = ", (v1 | (v2 * (not is_imm)) | (Imm * is_imm)) )
                    results = (v1 | (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 4:
                    flag = 1
                    if(v1 < 0):
                        flag = -1
                    results = lsr(v1*flag, (v2 if not is_imm else Imm), 32) 
                    results = results * flag
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) >> {Rs2} (Rs2) >> {Imm*is_imm} (Imm): " + f"{v1} >> {(v2*(not is_imm))} >> {(Imm* is_imm)} = ", results)
                    #results = (v1 >> (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 5:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) < {Rs2} (Rs2) < {Imm*is_imm} (Imm): " + f"{v1} < {(v2*(not is_imm))} < {(Imm* is_imm)} = ", (v1 < (v2 * (not is_imm)) < (Imm * is_imm)) )
                    results = (v1 < (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 6:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) > {Rs2} (Rs2) > {Imm*is_imm} (Imm): " + f"{v1} > {(v2*(not is_imm))} > {(Imm* is_imm)} = ", (v1 > (v2 * (not is_imm)) > (Imm * is_imm)) )
                    results = (v1 > (v2 if not is_imm else Imm)) 
                    ready = 1 
                case 7:
                    print(f"Performing uOp {uOp} for {Rd} (Rd) <- {Rs1} (Rs1) ^ {Rs2} (Rs2) ^ {Imm*is_imm} (Imm): " + f"{v1} ^ {(v2*(not is_imm))} ^ {(Imm* is_imm)} = ", (v1 ^ (v2 * (not is_imm)) ^ (Imm * is_imm)) )
                    results = (v1 ^ (v2 if not is_imm else Imm)) 
                    ready = 1 
        return results, ready
    return None

def compare_results (golden_model_PRF, sv_PRF):
    global flagging_error
    cycle_error = []
    elem_error = []
    for cycle in range(cycles):
        for _ in range(PRF_ENTRIES):
            if(int(sv_PRF[cycle][_]) != golden_model_PRF[cycle][_][0]):
                print(f"Error: sv_PRF and golden PRF content are different! cycle: {cycle} entry {_}", file=sys.stderr)
                flagging_error = 1
                cycle_error.append(cycle)
                elem_error.append(_)
    return cycle_error, elem_error

if __name__ == "__main__":
    Rs1 = [[]for _ in range(cycles)]
    Rs2 = [[]for _ in range(cycles)]
    Rd = [[]for _ in range(cycles)]
    uOps = [[]for _ in range(cycles)]
    is_imm = [[]for _ in range(cycles)]
    Imm = [[]for _ in range(cycles)]
    alucontrol = [[]for _ in range(cycles)]
    json_file = sys.argv[1]
    sv_PRF = [['0' for i in range(PRF_ENTRIES)] for _ in range(cycles)]
    with open(f"{json_file}", "r") as f:
        data = json.load(f)

    if(not(data)):
        print("Error loading json data, try again...")

    for idx in range(cycles):
        #print(data["cycle"][f"{index}"][4])
        for index, uOp in enumerate(data["cycle"]):
            if(index < 4):
                Rs1[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["Rs1"])
                Rs2[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["Rs2"])
                Rd[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["Rd"])
                is_imm[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["is_imm"])
                Imm[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["Imm"])
                alucontrol[idx].append(data["cycle"][f"{idx}"][index]["uOp"+str(index)]["alucontrol"])
        if(data["cycle"][f"{idx}"][4]["PRF_Content"]):
            for _ in range(PRF_ENTRIES):
                sv_PRF[idx][_] = (data["cycle"][f"{idx}"][4]["PRF_Content"]["PRF_entry["+str(_)+"]"])
                

    for idx in range(cycles):
        PRF_content_per_cycle.append(copy.deepcopy(PRF_content))
        for uop in range(parallelism):
            #print("printing Rs1: ", Rs1[idx][uop])
            result = golden_model(Rs1[idx][uop], Rs2[idx][uop], is_imm[idx][uop], Imm[idx][uop], Rd[idx][uop], alucontrol[idx][uop], idx, uop)
            if( result ):
                PRF_content[Rd[idx][uop]] = result
            


    #cycle_error, elem_error = compare_results(PRF_content, sv_PRF )
    #_range = len(cycle_error)
    #flagging_error = True
    #if ( flagging_error) :
    #    for ind in range(_range):
    #        print("Content of golden PRF: ", PRF_content[cycle_error[ind]][elem_error[ind]][0], " content of sv PRF: ", int(sv_PRF[cycle_error[ind]][elem_error[ind]]))      
    print(f"Golden PRF: ", end=" ")
    for elem in range(PRF_ENTRIES):
        if(PRF_content[elem][0] != 0):
            print(f" entry {elem}, val ->", int(PRF_content[elem][0]), end=" ")
    print()

    for cycle in range(cycles):
        print(f"GOLDEN PRF cycle {cycle}: ", end="")
        for elem in range(PRF_ENTRIES):
            #print(sv_PRF[cycle][elem])
            if(int(PRF_content_per_cycle[cycle][elem][0]) != 0):
                print(f" | entry {elem}, val ->", int(PRF_content_per_cycle[cycle][elem][0]), " | ", end='')
        print()
    for cycle in range(cycles):
        print(f"SV PRF cycle {cycle}: ", end="")
        for elem in range(PRF_ENTRIES):
            #print(sv_PRF[cycle][elem])
            if(int(sv_PRF[cycle][elem]) != 0):
                print(f" | entry {elem}, val ->", sv_PRF[cycle][elem], " | ", end='')
                
        print()
    #else:
    #    print()
    #    print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
    #    print("MODELS ARE MATCHING, GOOD JOB")
    #    print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
    #    print()

    
    #for _ in range(cycles):
    #    print(PRF_content[_])
    #print(sv_PRF)
