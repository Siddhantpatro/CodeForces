#!/usr/bin/env python
# coding: utf-8

# In[3]:


k, n, w = map(int, input().split())

sum = 0
diff = 0
for i in range(1, w+1):
    sum += k*i

diff = sum - n
    
if sum <= n:
    print (0)
else:
    print(diff)


# In[ ]:




