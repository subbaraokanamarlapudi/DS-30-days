'''

Find the next permutation in an array
Input : [1,3,2]
Output : [2,1,3]

'''

arr = [1,3,2]
n = 3
x = n - 2

while x>=0:
    if arr[x] < arr[x+1]:
        break
    x = x - 1

if x < 0:
    arr.reverse()
else:
    l = n - 1

while l > x:
    if arr[l] > arr[x]:
        break
    l = l - 1

arr[x], arr[l] = arr[l], arr[x]
arr[x+1:] = arr[x+1:][::-1]
print(arr)