#Enter length of sides of triangle as inputs
x = int(input())
y = int(input())
z = int(input())

if x == y == z:
	print("The given triangle is equilateral triangle")
elif x==y or y==z or z==x:
	print("The given triangle is isosceles triangle")
else:
	print("The given triangle is scalene triangle")
