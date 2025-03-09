def value (s: str) -> int:
    if s[:5].lower() == "hello":
        return 60
    if s[0] == "h" or s[0] == "H":
        return 20
    else:
        return 100

def main():
    print(value("hello"))
    print(value("h"))
    print(value("nguyen"))

if __name__ == "__main__":
    main()
