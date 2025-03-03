import pandas as pd
from numpy.ma.extras import average
from pandas.core.interchange.dataframe_protocol import DataFrame

# Ho Chi Nguyen 2251050058
# #BT ly thuyet
#C1
#
# diameter=[4879,12104,12756,6792,142984,120536,51118,49528]
# ds = pd.Series(diameter, index=["Mercury", "Venus", "Earth", "Mars", "Jupyter", "Saturn", "Uranus", "Neptune"])
# # print(ds[0])
# # print(ds[1])
#
# #C2 C3
# print(ds["Earth"])
#
# #C4
# print(ds["Mercury":"Mars"])
#
# #C5
# print(ds[["Earth","Jupyter","Neptune"]])
#
# # #c6
# ds["Pluto"] = 2370
# print(ds["Pluto"])
#
# #C7
# data={"diameter":[4879,12104,12756,6792,142984,120536,51118,49528,2370],
# "avg_temp":[167,464,15,-65,-110, -140, -195, -200, -225],
# "gravity":[3.7, 8.9, 9.8, 3.7, 23.1, 9.0, 8.7, 11.0, 0.7]
# }
#
# planets= pd.DataFrame(data)
# print(planets)
#
# planets.index=[ds.index]
# print(planets)
#
# #C8
# print(planets.head(3))
#
# #C9
# print(planets.tail(2))
#
# #C10
# print(planets.columns)
#
# #C11
# print(planets.index)
#
# #C12
# print(planets["gravity"])
#
# #C13
# print(planets[["gravity", "diameter"]])
#
# #C14
# print(planets.loc["Earth", "gravity"])
#
# #15
# print(planets.loc["Earth", ["diameter", "gravity"]])
#
# #C16
# # print(planets.loc["Earth" : "Saturn", ["diameter", "gravity"]])
#
# #C17
# print(planets[planets["diameter"] > 1000])
#
# #C18
# print(planets[planets["diameter"] > 100000])
#
# #C19
# print(planets[(planets["avg_temp"] > 0) & (planets["gravity"] > 5)])
#
# #C20
# print(planets.sort_values("diameter", ascending=True))
#
# #C21
# print(planets.sort_values("diameter", ascending=False))
#
# #c22
# print(planets.sort_values("gravity", ascending=False))
#
# #C23
# print(planets.loc["Mercury"].sort_values("gravity",ascending=False))

#BT PANDAS
# #C1
# f = pd.read_csv('04_gap-merged.tsv', delimiter='\t')
# print(f.head(5))
#
# #C2
# print("Number of rows:", f.shape[0])
# print("Number of columns:", f.shape[1])
#
# #C3
# print("Number of columns:", f.columns)
#
# #C4
# print(f.dtypes)
#
# #C5
# country_column = f['country']
# print(country_column.head(5))
#
# #C6
# print(country_column.tail(5))
#
# #C7
# country_continent_column_year = f[['country', 'continent', 'year']]
# print(country_continent_column_year.head(5))
# print(country_continent_column_year.tail(5))
#
# #C8
# print(f.iloc[0]) #lay row dau tien
# print(f.iloc[99])
#
# #C9
# print(f.iloc[:, 0])
# print(f.iloc[:, f.shape[1]-1])
#
# #C10
# print(f.loc[f.shape[0]-1])
# # print(f.loc[-1]) # index -1 sai
#
# #C11
# #method 1
# print(f.iloc[0])
# print(f.iloc[99])
# print(f.iloc[999])
#
# #method 2
# print(f.loc[0])
# print(f.loc[99])
# print(f.loc[999])
#
# #C12
# print(country_column.loc[43])
# print(country_column.iloc[43])
#
# #C13
# print(f.iloc[0, [0,3,5]])
# print(f.iloc[99, [0,3,5]])
# print(f.iloc[999, [0,3,5]])
#
# #C14
# f2 = pd.read_csv('04_gap-merged.tsv', delimiter='\t', nrows=10)
# print(f2)
#
# #C15
# print( f.groupby('year')['lifeExp'].mean())
#
# #C16
# subset_data = f[['year', 'lifeExp']]
# print(subset_data.groupby('year')['lifeExp'].mean())
#
# #C17
# se = pd.Series(["banana","42"], index=[0, 1])
# print(se)
#
# #C18
# se2 = pd.Series(["Person","Who"], index=['Wes MCKinney', 'Creator of Pandas'])
# print(se2)
#
# #C19
# pers = {
#     'Occupation': ["Chemist", "Statistician"],
#     'Born': ["1920-07-25", "’1876-06-13"],
#     'Died': ["1958-04-16", "1937-10-16"],
#     'Age': [37, 61]
# }
# print(pd.DataFrame(pers, ["Franklin","Gosset"]))