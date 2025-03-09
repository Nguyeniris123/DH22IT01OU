import prime
from prime import is_prime

def test_prime_nho_2():
    assert is_prime(1) == False

def test_prime():
    assert is_prime(7) == True

def test_is_not_prime():
    assert is_prime(4) == False