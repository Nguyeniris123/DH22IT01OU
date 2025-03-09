import sum_list
from sum_list import sum_list

def test_sum_empty_list():
    assert sum_list([]) == 0

def test_sum_single_element():
    assert sum_list([5]) == 5

def test_sum_multiple_elements():
    assert sum_list([1, 2, 3, 4, 5]) == 15

def test_sum_negative_number():
    assert sum_list([-1, -2, -3, 4]) == -2