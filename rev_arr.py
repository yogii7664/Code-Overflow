'''
Program to reverse the array
Created by Shouvik Dutta
Pls Merge my PR
'''
def rev(l):
  ans=[]
  for i in range(len(l)-1,-1,-1):
    ans.append(l[i])
   return ans
if name==main:
  l=[1,2,3,4,5,6]
  ans=rev(l)
  print(*ans)
