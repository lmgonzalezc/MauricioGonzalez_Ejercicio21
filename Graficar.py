import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ MarchaAleatoria.cpp -o MarchaAleatoria.x")
os.system("./MarchaAleatoria.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("MarchaAleatoria.png")

