from function import (
    input_fraction,
    add_fractions,
    subtract_fractions,
    multiply_fractions,
    divide_fractions,
)


def main():
    print("Fraction Calculator")
    num1 = int(input("Enter numerator of first fraction: "))
    den1 = int(input("Enter denominator of first fraction: "))
    num2 = int(input("Enter numerator of second fraction: "))
    den2 = int(input("Enter denominator of second fraction: "))
    try:
        frac1 = input_fraction(num1, den1)
        frac2 = input_fraction(num2, den2)
        print(f"Addition: {add_fractions(frac1, frac2)}")
        print(f"Subtraction: {subtract_fractions(frac1, frac2)}")
        print(f"Multiplication: {multiply_fractions(frac1, frac2)}")
        print(f"Division: {divide_fractions(frac1, frac2)}")
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()
