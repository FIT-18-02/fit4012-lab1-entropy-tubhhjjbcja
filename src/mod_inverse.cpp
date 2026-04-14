def gcd(a, b):
    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    return a

def extended_euclid(a, b):
    if b == 0:
        return a, 1, 0
    gcd_val, x1, y1 = extended_euclid(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd_val, x, y

def mod_inverse(a, m):
    """
    Calculate the modular multiplicative inverse of a modulo m.
    Returns x such that (a * x) % m == 1
    """
    if m <= 0:
        raise ValueError("m phai > 0")
    
    g, x, _ = extended_euclid(a % m, m)
    
    if g != 1:
        raise ValueError("Khong ton tai nghich dao modulo vi gcd(a, m) != 1")
    
    return (x % m + m) % m
