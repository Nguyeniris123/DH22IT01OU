import pytest
from function import (
    input_fraction,
    add_fractions,
    subtract_fractions,
    multiply_fractions,
    divide_fractions,
)


def test_add_fractions():
    assert add_fractions((1, 2), (1, 3)) == (5, 6)


def test_subtract_fractions():
    assert subtract_fractions((1, 2), (1, 3)) == (1, 6)


def test_multiply_fractions():
    assert multiply_fractions((1, 2), (1, 3)) == (1, 6)


def test_divide_fractions():
    assert divide_fractions((1, 2), (1, 3)) == (3, 2)


def test_divide_by_zero():
    with pytest.raises(ValueError, match="Cannot divide by zero"):
        divide_fractions((1, 2), (0, 1))


def test_input_fraction():
    assert input_fraction(3, 4) == (3, 4)
    assert input_fraction(2, 4) == (1, 2)
    with pytest.raises(ValueError, match="Denominator cannot be zero"):
        input_fraction(1, 0)


def test_invalid_fraction_format():
    with pytest.raises(TypeError, match=".*must be integers.*"):
        input_fraction(1.5, 2)


# Thiết kế test case sai kết quả
def test_failed_case():
    assert add_fractions((1, 2), (1, 3)) == (1, 2)  # Sai kết quả
