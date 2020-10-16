binnum = int(input("Enter a binary number "))

final = int(0)


#128
if (binnum >= 10000000):
    binnum = int(binnum-10000000) 
    final = int(final+128) 
#64
if (binnum >= 1000000):
    binnum = int(binnum-1000000) 
    final = int(final+64) 
#32
if (binnum >= 100000):
    binnum = int(binnum-100000) 
    final = int(final+32) 
#16
if (binnum >= 10000):
    binnum = int(binnum-10000) 
    final = int(final+16) 
#8
if (binnum >= 1000):
    binnum = int(binnum-1000) 
    final = int(final+8) 
#4
if (binnum >= 100):
    binnum = int(binnum-100)
    final = int(final+4)
#2
if (binnum >= 10):
    binnum = int(binnum-10)
    final = int(final+2)
#1
if (binnum >= 1):
    binnum = int(binnum-1)
    final = int(final+1)

print(final)
