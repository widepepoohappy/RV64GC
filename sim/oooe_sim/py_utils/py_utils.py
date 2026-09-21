
def mask_n(bits: int) -> int:
    return (1 << bits) - 1

def to_uint(x: int, bits: int) -> int:
    """Interpreta x su 'bits' come unsigned (wrapping two's complement)."""
    return x & mask_n(bits)

def to_sint(x: int, bits: int) -> int:
    """Interpreta x su 'bits' come signed two's complement."""
    x &= mask_n(bits)
    sign_bit = 1 << (bits - 1)
    return x - (1 << bits) if (x & sign_bit) else x

def lsl(x: int, n: int, bits: int) -> int:
    """Logical Shift Left su 'bits' bit (wrapping)."""
    return (to_uint(x, bits) << n) & mask_n(bits)

def lsr(x: int, n: int, bits: int) -> int:
    """Logical Shift Right su 'bits' bit (zeri in ingresso)."""
    return (to_uint(x, bits) >> n) & mask_n(bits)

def asr(x: int, n: int, bits: int) -> int:
    """Arithmetic Shift Right su 'bits' bit (preserva il segno)."""
    sx = to_sint(x, bits)
    # In Python >> su negativi è aritmetico, ma limitiamo al campo a 'bits'
    return to_uint(sx >> n, bits)

def rol(x: int, n: int, bits: int) -> int:
    """Rotate Left su 'bits' bit."""
    n %= bits
    u = to_uint(x, bits)
    return ((u << n) | (u >> (bits - n))) & mask_n(bits)

def ror(x: int, n: int, bits: int) -> int:
    """Rotate Right su 'bits' bit."""
    n %= bits
    u = to_uint(x, bits)
    return ((u >> n) | (u << (bits - n))) & mask_n(bits)

def sign_extend(x: int, from_bits: int, to_bits: int) -> int:
    """Estende il segno da 'from_bits' a 'to_bits'."""
    assert 0 < from_bits <= to_bits
    return to_sint(x, from_bits) & mask_n(to_bits)

