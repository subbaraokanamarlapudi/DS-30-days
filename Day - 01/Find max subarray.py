# We know that many subarrays in a array. Sum of elements of these elements are called subarray.
# i/p: [-2,-3,4,-1,-2,5,-3]
# o/p: 7

list = [-2,-3,4,-1,-2,1,5,-3]
# list = [2,-1,3]
max = list[0]
c = 0

for i in list:
    c = c + i

    if(max < c):
        max = c
    if (c<0):
        c = 0

print("The maximum subarray is:",max)