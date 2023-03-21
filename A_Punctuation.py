import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import tensorflow as tf
import sklearn as sk
# %matplotlib inline
arr = np.linspace(0,5,11)
arr1= arr**2
print(plt.plot(arr,arr1))
# plt.show()
np.random.seed(101)
df = pd.DataFrame(np.random.randn(5,4),['A','B','C','D','E'],['W','X','Y','Z'])
# print(df)
for i in dir(sk):
    print(i)