import pytest, reverse_string
from reverse_string import reverse_string

def test_string_rong():
    assert reverse_string("") == ""

def test_string_1_char():
    assert reverse_string("H") == "H"

def test_string():
    assert reverse_string("Hello") == "olleH"

def test_string__khoang_trang():
    assert reverse_string("He llo") == "oll eH"