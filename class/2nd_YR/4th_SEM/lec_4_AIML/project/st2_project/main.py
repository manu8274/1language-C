import random,math,matplotlib.pyplot as plt,seaborn as sns,numpy as np,pandas as pd
from sklearn.linear_model import LinearRegression as lr
df=pd.read_csv("Housing.csv")
print(df.head())