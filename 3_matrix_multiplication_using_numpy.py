import numpy as np

np.random.seed(42)

A = np.random.randint(0, 10, size=(2,2))

B = np.random.randint(0, 10, size=(2,3))

C = np.random.randint(0, 10, size=(3,3))

print("Matrix A is:\n{}, shape={}\n".format(A, A.shape))

print("Matrix B is:\n{}, shape={}\n".format(B, B.shape))

print("Matrix C is:\n{}, shape={}\n".format(C, C.shape))

D = np.matmul(np.matmul(A,B), C)

print("Multiplication in the order (AB)C:\n\n{},shape={}\n".format(D, D.shape))

D = np.matmul(A, np.matmul(B,C))

print("Multiplication in the order A(BC):\n\n{},shape={}".format(D, D.shape))
