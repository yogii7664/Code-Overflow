n=int(input("Enter limit : "))
f=0
s=1
print(f,end=' ')
print(s,end=' ')
for i in range(1,limit-1):
  t=f+s
  print(t,end=' ')
  f=s
  s=t
  
