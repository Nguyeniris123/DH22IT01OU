import pandas as pd

du_lieu_lop_hoc = {
    "Ten_SV" : ["Ho Chi Nguyen", "Le Thanh Dan", "Le Quang Minh"],
    "Ns" : [2004, 2004, 2003],
    "Major": ["CNTT", "CNTT", "CNTT"],
    "DTB": [9,10, 10]
}

df_lop_hoc = pd.DataFrame(du_lieu_lop_hoc)

print("bang diem cua lop")
print(df_lop_hoc)

cot_ten = df_lop_hoc["Ten_SV"]
print(cot_ten)

print(df_lop_hoc.describe())

sv_gioi = df_lop_hoc[df_lop_hoc["DTB"] > 8.5]
print(sv_gioi)

