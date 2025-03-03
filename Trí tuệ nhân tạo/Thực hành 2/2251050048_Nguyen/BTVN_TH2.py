import matplotlib.pyplot as plt
import seaborn as sns
import pandas as pd

#C2
tips = sns.load_dataset("tips")
sns.set_style("whitegrid")
g = sns.lmplot(x="tip", y="total_bill", data=tips, aspect=2)
g = (g.set_axis_labels("Tip","Total bill(USD)").set(xlim=(0,10),ylim=(0,100)))
plt.title("title")

#C3
print(tips.head())
# datasets = sns.get_dataset_names()
# print(datasets)

#C4
sns.scatterplot(x='total_bill', y='tip', data=tips)
plt.show()

#C5
sns.set_context(font_scale=3.0)
sns.set_style("darkgrid")
sns.scatterplot(x='total_bill', y='tip', data=tips)
plt.show()

#C6
sns.scatterplot(x='total_bill', y='tip', hue='day', data=tips)
plt.show()

#C7
sns.scatterplot(x='total_bill', y='tip', size='size', data=tips, sizes=(20, 200))
plt.show()

#C8
g = sns.FacetGrid(tips, col='time')
g.map(sns.scatterplot, 'total_bill', 'tip')
plt.show()

#C9
g = sns.FacetGrid(tips, col='time', hue='sex')
g.map(sns.scatterplot, 'total_bill', 'tip')
g.add_legend()
plt.show()