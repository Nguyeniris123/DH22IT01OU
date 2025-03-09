# Tìm ước chung
def gcd(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return abs(a)


# Tối giản phân số
def simplify(numerator: int, denominator: int) -> tuple:
    common_divisor = gcd(numerator, denominator)
    return numerator // common_divisor, denominator // common_divisor


# Nhập phân số
def input_fraction(numerator: int, denominator: int) -> tuple:
    if not isinstance(numerator, int) or not isinstance(denominator, int):
        raise TypeError("Numerator and denominator must be integers")
    if denominator == 0:
        raise ValueError("Denominator cannot be zero")
    return simplify(numerator, denominator)


# Cộng phân số
def add_fractions(frac1: tuple, frac2: tuple) -> tuple:
    numerator = frac1[0] * frac2[1] + frac2[0] * frac1[1]
    denominator = frac1[1] * frac2[1]
    return simplify(numerator, denominator)


# Trừ phân số
def subtract_fractions(frac1: tuple, frac2: tuple) -> tuple:
    numerator = frac1[0] * frac2[1] - frac2[0] * frac1[1]
    denominator = frac1[1] * frac2[1]
    return simplify(numerator, denominator)


# Nhân phân số
def multiply_fractions(frac1: tuple, frac2: tuple) -> tuple:
    numerator = frac1[0] * frac2[0]
    denominator = frac1[1] * frac2[1]
    return simplify(numerator, denominator)


# Chia phân số
def divide_fractions(frac1: tuple, frac2: tuple) -> tuple:
    if frac2[0] == 0:
        raise ValueError("Cannot divide by zero")
    numerator = frac1[0] * frac2[1]
    denominator = frac1[1] * frac2[0]
    return simplify(numerator, denominator)
