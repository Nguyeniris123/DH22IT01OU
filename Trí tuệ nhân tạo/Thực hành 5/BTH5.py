import matplotlib.pyplot as plt
import networkx as nx
import numpy as np
from fontTools.varLib.instancer import verticalMetricsKeptInSync

#Tạo figure
fig, ax = plt.subplots(figsize=(8,6))

#So luong nut xung quanh o moi tang
num_nodes_per_layer = 10 # Moi tang co 10 nut xung quanh

#Tao 2 tang
G1 = nx.Graph() #tang 1
G2 = nx.Graph() #tang 2

# Them nut trung tam
central_node_1 = "C1"
central_node_2 = "C2"
G1.add_node(central_node_1)
G2.add_node(central_node_2)

#Them nut xung quanh
for i in range (num_nodes_per_layer):
    G1.add_node(f"L1_{i}")
    G2.add_node(f"L2_{i}")

#Them canh voi trong so
#Trong so phan bo tu 0.025 den 0.200
weights1 = np.linspace(0.025, 0.200, num_nodes_per_layer) # Tang 1: 10 trong so
weights2 = np.linspace(0.025, 0.200, num_nodes_per_layer) # Tang 2: 10 trong so

for i in range(num_nodes_per_layer):
    G1.add_edge(central_node_1, f"L1_{i}", weight=weights1[i])
    G2.add_edge(central_node_2, f"L2_{i}", weight=weights2[i])

#Tao bo cuc hinh tron
pos1 = nx.circular_layout(G1)
pos2 = nx.circular_layout(G2)

#Dich chuyen tang 2 xuong duoi
for node in pos2:
    pos2[node][1] -= 2

#Ket hop vi tri
pos = {**pos1, **pos2}

#Dinh nghia mau sac nut
#Tang 1: Nut trung tam mau vang, nut co trong so ~0.200 mau do, ~0.150 mau cam, con lai mau nau

node_colors1 = ["yellow"] + ["red" if abs(weights1[i] - 0.200) < 0.01 else "orange" if abs(weights1[i] - 0.150) < 0.01 else "brown" for i in range(num_nodes_per_layer)]
#Tang 2: Nut trung tam mau vang, nut co trong so ~0.200 mau do, con lai mau nau
node_colors2 = ["yellow"] + ["red" if abs(weights2[i] - 0.200) < 0.01 else "brown" for i in range(num_nodes_per_layer)]

#ve nut
nx.draw_networkx_nodes(G1, pos, node_color=node_colors1, node_size=500, ax=ax)
nx.draw_networkx_nodes(G2, pos, node_color=node_colors2, node_size=500, ax=ax)

#Ve canh voi mau sac dua tren trong so
edge_colors1 = [G1[u][v]["weight"] for u, v in G1.edges()]
edge_colors2 = [G2[u][v]["weight"] for u, v in G2.edges()]

nx.draw_networkx_edges(G1, pos, edge_color=edge_colors1, edge_cmap=plt.cm.Reds, ax=ax)
nx.draw_networkx_edges(G2, pos, edge_color=edge_colors2, edge_cmap=plt.cm.Reds, ax=ax)

#Them nhan cho tang
ax.text(-1.5, 0, "layer: i = 1", fontsize=12, verticalalignment="center")
ax.text(-1.5, -2, "layer: i = 2", fontsize=12, verticalalignment="center")

#Them thanh mau
sm = plt.cm.ScalarMappable(cmap=plt.cm.Reds, norm=plt.Normalize(vmin=0.025, vmax=0.200))

plt.colorbar(sm, ax=ax, label="")

#Hien thi bieu do
plt.title("Multiplayer Network")
plt.axis("off")
plt.show()

