def contains(lst: list, value: int) -> bool:
    for i in lst:
        if i == value:
            return True
    return False