from cProfile import label
from statistics import linear_regression

from scipy.stats import alpha
from sklearn.datasets import load_iris
from sklearn.decomposition import PCA
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score
from sklearn.datasets import load_diabetes
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score, mean_squared_error
from sklearn.datasets import load_breast_cancer
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.svm import LinearSVC
from sklearn.datasets import fetch_lfw_people
from sklearn.svm import SVC
from sklearn.model_selection import cross_val_score

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import mglearn

# #C1
# iris = load_iris()
# iris_data = iris.data
# print(iris_data[:5])
#
# #C2
# iris_target = iris.target
# print(iris_target[:5])
#
# target_name = iris.target_names
# print(target_name)

# #C3
# sepel_length = iris_data[:,0]
# sepel_width = iris_data[:,1]
#
# x1 = sepel_length[iris.target == 0]
# y1 = sepel_width[iris.target == 0]
# plt.scatter(x1,y1, label = "Setosa", c = "red")
#
# x2 = sepel_length[iris.target == 1]
# y2 = sepel_width[iris.target == 1]
# plt.scatter(x2,y2, label = "Versicolor", c = "blue")
#
# x3 = sepel_length[iris.target == 2]
# y3 = sepel_width[iris.target == 2]
# plt.scatter(x3,y3, label = "virginica", c = "green")
#
# plt.xlabel = "Chieu dai dai"
# plt.ylabel = "Chieu rong dai"
# plt.title = "Bieu do"
# plt.legend()
# plt.show()

# #C4
# pca = PCA(n_components=3)
# iris_pca = pca.fit_transform(iris.data)
# print(iris_pca[:5])
#
# #C5
# X_train, X_test, Y_train, Y_test = train_test_split(iris.data, iris.target, train_size= 140, test_size=10, random_state = 42)
#
# #C6
# knn = KNeighborsClassifier(n_neighbors=5)
# knn.fit(X_train, Y_train)
# Y_pred = knn.predict(X_test)
# print(Y_pred)
#
# #C7
# accurary = accuracy_score(Y_test, Y_pred)
# print(accurary)
#
# #C8
# X = iris.data[:, [0,1]]
# y = iris.target
#
# x_min, x_max = X[:, 0].min() - 1, X[:, 0].max() + 1
# y_min, y_max = X[:, 1].min() - 1, X[:, 1].max() + 1
#
# xx, yy = np.meshgrid(np.arange(x_min, x_max, 0.1), np.arange(y_min, y_max, 0.1))
#
# knn = KNeighborsClassifier(n_neighbors=5)
# knn.fit(X,y)
#
# Z = knn.predict(np.c_[xx.ravel(), yy.ravel()])
# Z = Z.reshape(xx.shape)
#
# plt.contourf(xx, yy, Z, alpha= 0.3)
# plt.scatter(X[:, 0], X[:,1], c=y, edgecolors='k')
# plt.xlabel('Chieu dai dai hoa (cm)')
# plt.ylabel('Chieu rong dai hoa (cm)')
# plt.title('Ranh gioi quyet dinh voi KNN')
# plt.show()

# #C9
# diabeters = load_diabetes()
# print(diabeters.data[:5])
#
# #C10
# X_train = diabeters.data[:422]
# X_test = diabeters.data[422:]
# y_train = diabeters.target[:422]
# y_test = diabeters.target[422:]
#
# print(X_train.shape)
# print(X_test.shape)
#
# #C11
# lr = LinearRegression()
# lr.fit(X_train, y_train)
#
# #C12
# coefficients = lr.coef_
# print(coefficients)
#
# #C13
# y_pred = lr.predict(X_test)
#
# print(y_test)
# print(y_pred)
#
# #C14
# r2 = r2_score(y_test, y_pred)
# print(r2)
#
# mse = mean_squared_error(y_test, y_pred)
# print(mse)
#
# #C15
# X_train_age = X_train[:, [0]]
# X_test_age = X_test[:, [0]]
#
# lr_age = LinearRegression()
# lr_age.fit(X_train_age, y_train)
#
# y_pred_age = lr_age.predict(X_test_age)
# print(y_pred_age)
#
# #C16
# for i in range (10):
#     X_train_simple = X_train[:, [i]]
#     X_test_simple = X_test[:, [i]]
#
#     lr_simple = LinearRegression()
#     lr_simple.fit(X_train_simple, y_train)
#     y_pred_simple = lr_simple.predict(X_test_simple)
#
#     plt.figure()
#     plt.scatter(X_test_simple, y_test, color='blue', label='Thuc te')
#     plt.plot(X_test_simple, y_pred_simple, color='red', label='du doan')
#     plt.xlabel(f'Dac trung {i+1}')
#     plt.ylabel('Tien trinh benh')
#     plt.title(f'Hoi quy tuyen tinh voi Dac trung {i + 1}')
#     plt.legend()
#     plt.show()

# #C17
# breast_cancer = load_breast_cancer()
# print(breast_cancer.keys())
#
# #C18
# print(breast_cancer.data.shape)
#
# target_series = pd.Series(breast_cancer.target)
# benign_count = target_series.value_counts()[1]
# malignant_count = target_series.value_counts()[0]
#
# print(benign_count)
# print(malignant_count)
#
# # Chia dữ liệu thành tập huấn luyện và tập kiểm tra
# X_train, X_test, y_train, y_test = train_test_split(breast_cancer.data, breast_cancer.target, test_size=0.2, random_state=42)
#
# #C19
# # Khởi tạo danh sách điểm số ban đầu (có 10 phần tử cho k = 1 đến k = 10)
# train_scores = []
# test_scores = []
#
# # Lặp qua các giá trị k từ 1 đến 10
# for k in range(1, 11):
#     knn = KNeighborsClassifier(n_neighbors=k)
#     knn.fit(X_train, y_train)
#
#     # Tính điểm số trên tập huấn luyện và tập kiểm tra
#     train_scores.append(knn.score(X_train, y_train))
#     test_scores.append(knn.score(X_test, y_test))
#
# # Vẽ đồ thị sau khi hoàn tất vòng lặp
# plt.plot(range(1, 11), train_scores, label='Độ chính xác tập huấn luyện')
# plt.plot(range(1, 11), test_scores, label='Độ chính xác tập kiểm tra')
#
# # Thêm các nhãn và tiêu đề
# plt.xlabel('Số lượng láng giềng (K)')
# plt.ylabel('Độ chính xác')
# plt.title('Hiệu suất KNN với số láng giềng từ 1 đến 10')
# plt.legend()
#
# # Hiển thị biểu đồ
# plt.show()

# #C20
# X, y = mglearn.datasets.make_forge()
#
# logreg = LogisticRegression().fit(X, y)
# print(logreg.score(X,y))
#
# svc = LinearSVC().fit(X,y)
# print(svc.score(X,y))

# C21
import ssl
ssl._create_default_https_context = ssl._create_unverified_context

# Tải bộ dữ liệu LFW với ít nhất 70 ảnh mỗi người, thay đổi kích thước ảnh xuống 40%
faces = fetch_lfw_people(min_faces_per_person=70, resize=0.4)

# In mô tả của bộ dữ liệu
print(faces.DESCR)

# C22
print(faces.images.shape)
print(faces.data.shape)
print(faces.target.shape)
print(faces.target_names)


# C23
def plot_faces(images, n_row=2, n_col=5):
    plt.figure(figsize=(2 * n_col, 2.5 * n_row))
    for i in range(n_row * n_col):
        plt.subplot(n_row, n_col, i + 1)
        plt.imshow(images[i], cmap='gray')
        plt.axis('off')
    # plt.show()


plot_faces(faces.images)

# C24
svc = SVC(kernel='linear')

# C25
X_train, X_test, y_train, y_test = train_test_split(faces.data, faces.target, test_size=0.25, random_state=42)
print(X_train.shape)
print(X_test.shape)


# C26
def evaluate_cross_validation(model, X, y, k=5):
    scores = cross_val_score(model, X, y, cv=k)
    print(f" K-fold precision (k=(k)): (scores.mean():.2f) (+/- (scores.std() * 2:.24))")


# C27
def train_and_evaluate(model, X_train, X_test, y_train, y_test):
    model.fit(X_train, y_train)
    train_score = model.score(X_train, y_train)
    test_score = model.score(X_test, y_test)
    print(train_score)
    print(test_score)


# C28
svc = SVC(kernel='linear')
evaluate_cross_validation(svc, faces.data, faces.target)
train_and_evaluate(svc, X_train, X_test, y_train, y_test)


# C29
def create_glasses_target(target):
    np.random.seed(42)
    glasses_target = np.random.randint(0, 2, size=len(target))
    return glasses_target


faces_glasses_target = create_glasses_target(faces.target)
print(faces_glasses_target[:10])

# C30
X_train, X_test, y_train, y_test = train_test_split(faces.data, faces_glasses_target, test_size=0.25, random_state=42)
svc_2 = SVC(kernel='linear')
svc_2.fit(X_train, y_train)


# C31
def evaluate_cross_validation(model, x, y, k):
    from sklearn.model_selection import cross_val_score
    scores = cross_val_score(model, x, y, cv=k)
    print("K-fold precision (k=(k)): (scores.mean():.2f) (+/- (scores.std() 2:.24))")

svc_2 = SVC(kernel='linear')
evaluate_cross_validation(svc_2, X_train, y_train,  5)

# Cau 32
X_eval = faces.data[30:40]
y_eval = faces_glasses_target[30:40]

X_train_remaining = np.concatenate((faces.data[:30], faces.data[40:]))
y_train_remaining = np.concatenate((faces_glasses_target[:30], faces_glasses_target[40:]))

svc_3 = SVC(kernel='linear')
svc_3.fit(X_train_remaining, y_train_remaining)

accuracy = svc_3.score(X_eval, y_eval)
print("Do chinh xac tren tap danh gia 10 anh:", accuracy)

# Cau 33
y_pred = svc_3.predict(X_eval)
eval_faces = [np.reshape(a, (50, 37)) for a in X_eval]


def plot_faces(images, predictions, n_col=10):
    plt.figure(figsize=(2 * n_col, 2.5))
    for i in range(len(images)):
        plt.subplot(1, n_col, i + 1)
        plt.imshow(images[i], cmap="gray")
        plt.title(f'Pred: {predictions[i]}')
        plt.axis("off")
    plt.show()

plot_faces(eval_faces, y_pred)

for i in range(len(y_eval)):
    if y_eval[i] != y_pred[i]:
        print(f"anh o chi so {i + 30} bi phan loai sai. Thuc te {y_eval[i]}, Du doan: {y_pred[i]}")
