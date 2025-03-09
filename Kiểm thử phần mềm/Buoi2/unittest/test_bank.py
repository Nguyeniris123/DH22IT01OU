import pytest, bank
from bank import value

def test_bank_0():
    assert value("hello") == 0

def test_bank_20():
    assert value("h") == 20

def test_bank_100():
    assert value("nguyen") == 100