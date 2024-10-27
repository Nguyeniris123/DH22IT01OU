words = {
    'table': 'cai ban',
    'mobile': 'dien thoai di dong',
    'pen': 'cai but'
}

def add_word(word, mean):
    if word not in words:
        words[word] = mean

def delete_word(word):
    if word in words:
        del words[word]

def display():
    for k, v in words.items():
        print(f"{k} -> {v}")

if __name__ == '__main__':
    add_word('phone', 'dien thoai')
    add_word(mean='but chi', word='pencil')
    delete_word(word="mobile")
    display()
