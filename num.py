import numpy as np
import time
a=np.random.rand(10000000)
b=np.random.rand(10000000)

tic=time.time()
c=np.dot(a,b)
toc=time.time()

print ("Time is:  "+str(1000*(toc-tic)))
