# Python program to find the sum of positive square elements in an array
import math
def isPerfectSquare(number):
    if(math.sqrt(number) == math.floor(math.sqrt(number))):
        return number
    else:
        return 0

    n = int(input())
    sum = 0
    arr1 = []
    for i in range(0,n):
        temp = int(input())
        arr1.append(temp)

        for i in range(0,n):
            sum = sum + isPerfectSquare(arr1[i])
print(sum)