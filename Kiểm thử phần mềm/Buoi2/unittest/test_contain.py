import contain, pytest
from contain import contains

def test_value():
    assert contains([1,2,3], 1) == True

def test_none_value():
    assert contains([1,2,3], 4) == False