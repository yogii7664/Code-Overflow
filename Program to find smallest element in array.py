arrayIN = [int(i) for i in input("Enter the array (separated by comma ','): ").split(",")]

smallest = arrayIN[0]
for i in range(1, len(arrayIN)):
        if (arrayIN[i] <= smallest):
                smallest = arrayIN[i]

print("The smallest element in array is:", smallest)
