# -*- coding: utf-8 -*-
"""I_love_%username%.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1zN1NqP_X6IB_vzcXGezUcADN4Rc-ne7U
"""

def scores():
  global n, s
  n = int(input())
  s = list(map(int, input().split(" ")))
  small = large = s[0]
  cA = 0
  for i in s[1:]:
    if (i < small):
      small = i
      cA += 1
    
    if (i > large):
      large = i
      cA += 1

  return cA

print(scores())