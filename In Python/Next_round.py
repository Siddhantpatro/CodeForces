#!/usr/bin/env python
# coding: utf-8

# In[1]:


n, k = map(int, input().split())
a = list(map(int, input().split()))
temp = a[k-1]
count=0
for i in range(0,n):
    if a[i]>=temp and a[i]>0 :
        count += 1
print (count)


# In[ ]:




