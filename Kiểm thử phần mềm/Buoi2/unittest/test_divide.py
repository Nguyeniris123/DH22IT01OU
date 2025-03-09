import divide, pytest
from divide import divide

def test_duong_duong():
    assert divide(4,2) == True

def test_am_duong():
    assert divide(-2,2) == True

def test_divide_1():
    assert divide(4,1) == True

def test_divide_0():
    with pytest.raises(ValueError, match="Devide cannot be zero"):
        divide(4,0)