def gcd(a, b):
    """
    Calculate the greatest common divisor of a and b using Euclidean algorithm.
    
    Args:
        a: First integer
        b: Second integer
        
    Returns:
        The GCD of a and b
    """
    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    return a


def extended_euclid(a, b):
    """
    Extended Euclidean Algorithm to find gcd(a, b) and coefficients x, y
    such that a*x + b*y = gcd(a, b).
    
    Args:
        a: First integer
        b: Second integer
        
    Returns:
        Tuple (gcd_val, x, y) where gcd_val is gcd(a, b)
    """
    if b == 0:
        return a, 1, 0
    gcd_val, x1, y1 = extended_euclid(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd_val, x, y


def mod_inverse(a, m):
    """
    Calculate the modular multiplicative inverse of a modulo m.
    
    Finds x such that (a * x) % m == 1, where 0 <= x < m.
    
    Args:
        a: The number to find the inverse of
        m: The modulus (must be > 0)
        
    Returns:
        The modular inverse x where (a * x) % m == 1
        
    Raises:
        ValueError: If m <= 0 or if modular inverse doesn't exist (gcd(a, m) != 1)
    """
    if not isinstance(a, int) or not isinstance(m, int):
        raise TypeError("Both a and m must be integers")
    
    if m <= 0:
        raise ValueError("m must be greater than 0")
    
    g, x, _ = extended_euclid(a % m, m)
    
    if g != 1:
        raise ValueError(f"Modular inverse does not exist: gcd({a}, {m}) = {g} != 1")
    
    return (x % m + m) % m
