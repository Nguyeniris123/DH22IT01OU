import json
def load_employees():
    with open('Data/employees.json', encoding='utf-8') as f:
        return json.load(f)

def display(employees):
    for em in employees:
        for k, v in em.items():
            if k.__eq__('ma_nv'):
                print(f"Ma nhan vien: {v}")
            elif k.__eq__('ten_nv'):
                print(f"Ten nhan vien: {v}")

def add_em (employees, ma_nv, ten_nv):
    e = {
        "ma_nv": ma_nv,
        "ten_nv": ten_nv
    }
    employees.append(e)
    return save_json()

def save_json():
    with open('Data/employees.json', mode='w', encoding='utf-8') as f:
        return json.dump(employees, f, ensure_ascii=False, indent=4)


def delete_em (employees, ma_nv):
    for idx, em in enumerate(employees):
        if em['ma_nv'] == ma_nv:
            del employees[idx]

    save_json()

if __name__ == '__main__':
    employees = load_employees()
    add_em(employees, ma_nv=2, ten_nv='Ho Chi Nguyen')
    delete_em(employees, 99)
    display(employees)


