def reverse_string(s: str) -> str:
    reversed_text = ""
    for char in s:
        reversed_text = char + reversed_text
    return reversed_text