from matplotlib.lines import lineStyles
from scipy.cluster.vq import kmeans
from scipy.stats import alpha
from sklearn.cluster import KMeans
from sklearn.datasets import load_digits, data
import matplotlib.pyplot as plt
from sklearn.decomposition import PCA
import numpy as np
from sklearn.metrics import adjusted_rand_score
from sklearn.model_selection import train_test_split

# C1: Load dataset
digits = load_digits()
X = digits.data
y = digits.target
print(digits.data)
print(digits.target)

# Step 2: Define a function to draw the digits

def plot_digits(data, labels, num_rows=2, num_cols=5, title="Chữ số viết"):
    # Create a subplot grid
    fig, axes = plt.subplots(num_rows, num_cols, figsize=(10, 4))

    for i, ax in enumerate(axes.ravel()):
        if i < len(data):  # Ensure we don't go out of bounds
            # Display each digit as an 8x8 image
            ax.imshow(data[i].reshape(8, 8), cmap='gray')
            ax.set_title(f'Nhãn: {labels[i]}')  # Set the title as the label
            ax.axis('off')  # Turn off the axis

    # Set the title for the entire plot
    plt.suptitle(title)
    plt.tight_layout()  # Adjust the layout to prevent overlapping
    plt.show()

plot_digits(digits.data, digits.target, num_rows=2, num_cols=5)

# C3: Plot PCA scatter plot
def plot_pca_scatter(data_matrix, target_vector, num_components=2):
    # Perform PCA to reduce data dimensionality
    pca = PCA(n_components=num_components)
    pca_result = pca.fit_transform(data_matrix)

    # Create scatter plot
    plt.figure(figsize=(8, 6))
    scatter = plt.scatter(pca_result[:, 0], pca_result[:, 1], c=target_vector, cmap='viridis', edgecolor='k')

    # Add color bar based on class
    plt.colorbar(scatter)

    # Label axes
    plt.xlabel('PCA Component 1')
    plt.ylabel('PCA Component 2')
    plt.title('PCA - Scatter Plot (2D) with Class Colors')
    plt.show()

    return pca_result, pca  # Return the PCA result and the PCA model

plot_pca_scatter(digits.data, digits.target, 2)

# C4: Unpack PCA results
X_pca, pca_model = plot_pca_scatter(digits.data, digits.target, 2)

# C5: Plot PCA components
def plot_pca_components():
    pca = PCA(n_components=10)
    pca.fit(digits.data)

    components = pca.components_

    fig, axes = plt.subplots(2, 5, figsize=(10, 4))
    for i, ax in enumerate(axes.ravel()):
        if i < len(components):
            ax.imshow(components[i].reshape(8, 8), cmap='gray')
            ax.set_title(f'Component {i+1}')
            ax.axis('off')
    plt.suptitle("Top 10 Principal Components as 8x8 Images")
    plt.tight_layout()
    plt.show()

plot_pca_components()

#C6
#C7
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
print(X_train.shape)
print(X_test.shape)

#C8
def experiment_with_n_init(X_train, y_train, n_clusters=10):
    n_init_values = [1, 5, 10, 20]
    ari_scores = []

    for n_init in n_init_values:
        kmeans = KMeans(n_clusters=n_clusters, n_init=n_init, random_state=42)
        kmeans.fit (X_train)
        cluster_labels = kmeans.labels_
        ari = adjusted_rand_score(y_train, cluster_labels)
        ari_scores.append(ari)
        print(f"n_init = {n_init}, Chi so Adjusted Rand Index: {ari:.4f}")

    plt.figure(figsize=(8,5))
    plt.plot(n_init_values, ari_scores, marker='o', linestyle='-', color='b')
    plt.xlabel('Gia tri n-init')
    plt.ylabel('Chi so Adjusted Rand Index')
    plt.title('Anh huong cua init den hieu suat phan cum k-means')
    plt.grid(True)
    plt.show()

experiment_with_n_init(X_train, y_train)

#C9
kmeans = KMeans(n_clusters=10, n_init=10, random_state=42)
kmeans.fit(X_train)
train_cluster_labels = kmeans.labels_

print(train_cluster_labels[:20])
plot_digits(X_train, train_cluster_labels, title="Chu so huan luyen voi nhan cum du doan")

#C10
predicted_train_labels = kmeans.predict(X_train)
print(predicted_train_labels[:20])

#C11
def print_cluster(X, cluster_labels, n_cluster = 1, images_per_cluster = 10):
    for cluster in range(n_cluster):
        cluster_indices = np.where(cluster_labels == cluster)[0]
        if len(cluster_indices) > 0:
            selected_indices = cluster_indices[:min(images_per_cluster, len(cluster_indices))]
            selected_images = X[selected_indices]
            selected_labels = cluster_labels[selected_indices]
            num_rows = 2
            num_cols = 5
            print(f"\n Cum {cluster} (hien thi {len(selected_indices)} hinh anh):")
            plot_digits(selected_images, selected_labels, num_rows, num_cols, title=f"chu so trong cum {cluster}")
        else:
            print(f"\ncum {cluster} trong")

print_cluster(X_train, train_cluster_labels)

#C12
test_cluster_labels = kmeans.predict(X_test)
train_ari = adjusted_rand_score(y_train, train_cluster_labels)
test_ari = adjusted_rand_score(y_test, test_cluster_labels)

print(f"Chi so Adjusted Rand Index cho tap huan luyen: {train_ari:.4f}")
print(f"Chi so Adjusted Rand Index cho tap kiem tra: {test_ari:.4f}")

#C13
def plot_kmeans_decision_boundary(X, y, kmeans, title="Vung phan cum k-means trong ko gian 2D"):
    pca = PCA(n_components=2)
    X_pca = pca.fit_transform(X)

    h = 0.5
    x_min, x_max = X_pca[:, 0].min() - 1, X_pca[:, 0].max() + 1
    y_min, y_max = X_pca[:, 0].min() - 1, X_pca[:, 0].max() + 1

    xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))

    mesh_points = np.c_[xx.ravel(), yy.ravel()]
    mesh_points_original = pca.inverse_transform(mesh_points)
    mesh_labels = kmeans.predict(mesh_points_original)

    plt.figure(figsize=(10, 8))
    plt.contour(xx, yy, mesh_labels.reshape(xx.shape), cmap = 'tab10', alpha=0.6)

    scatter = plt.scatter(X_pca[:, 0], X_pca[:, 1], c=y, cmap='tab10', edgecolors='k', alpha=0.6)

    plt.colorbar(scatter, label='Nhan cum')
    plt.xlabel('PCA Component 1')
    plt.ylabel('PCA Component 2')
    plt.title(title)
    plt.show()

plot_kmeans_decision_boundary(X_train, train_cluster_labels, kmeans, title="Vung phan cum k-means tren du lieu huan luyen")
