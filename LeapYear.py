from datetime import date
today = date.today

repeat = input("How many leap years do you want: ")
leapyear = 2020
current_date = date.today()
if current_date.year != 2020:
    leapyear = 2024

while (not repeat.isdigit() or (int(repeat) == 0)):
    repeat = input("Error. Enter a number for how many leap years:  ")

print(leapyear)
for x in range (int(repeat)-1):
    leapyear = leapyear + 4
    print(leapyear)
