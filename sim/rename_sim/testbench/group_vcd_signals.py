#!/usr/bin/python3



def generate_gtkwave_group(signal_name, range_str, group_name, original_range):
    """
    Genera una sezione GTKWave per raggruppare i bit di un segnale.

    Parameters:
        signal_name (str): nome del segnale (es: "my_signal")
        range_str (str): range nel formato "msb:lsb" (es: "7:0")
        group_name (str): nome del gruppo da creare
    """

    # Parsing del range
    if ":" not in range_str:
        raise ValueError("Il range deve essere nel formato msb:lsb")

    msb, lsb = map(int, range_str.split(":"))

    step = -1 if msb > lsb else 1

    # GTKWave richiede: 
    # @group <nome>
    # <signal>[bit]
    # @endgroup
    commented_text = ""
    for bit in range(msb, lsb + step, step):
        commented_text += f"({max_bits-bit}){signal_name}[{original_range}] "
    

    lines = []
    text_to_append = """
@c00024
#{""" + group_name + """} """ + commented_text + """
@28 """
    lines.append(text_to_append)

    for bit in range(msb, lsb + step, step):
        lines.append(f"({max_bits-bit}){signal_name}[{original_range}]")

    lines.append("@1401200 \n-group_end")

    return "\n".join(lines)


# ===========================
# ESEMPIO D'USO
# ===========================
if __name__ == "__main__":
    sig = "TOP.ooo_extension.uOp_router_u.Rs2_directed_o"
    rng = "895:768"
    grp = "Rs2_to_uL1"
    original_range = "1023:0"
    max_bits = int(original_range.split(':')[0])
    bit_chunks = 128
    chunks = max_bits//bit_chunks//2
    for i in range(chunks):
        rng = f"{bit_chunks}*{i*2+1}:{bit_chunks}*{i*2}"
        print(rng)

    print(max_bits)
   #print(generate_gtkwave_group(sig, rng, grp, original_range))

