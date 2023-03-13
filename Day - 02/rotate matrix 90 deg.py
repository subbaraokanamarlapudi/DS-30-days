# Rotate the matrix 90 degrees
#     Input: 1 2 3
#            4 5 6
#            7 8 9
#     Output: 7 4 1
#             8 5 2
#             9 6 3

l = [[1,2,3],[4,5,6],[7,8,9]]

for i in range(3):
    for j in range(i):
        l[i][j],l[j][i] = l[j][i],l[i][j]

for i2 in range(3):
    l[i2].reverse()

for i1 in range(3):
    for j1 in range(3):
        print(l[i1][j1],end=" ")
    print("\n")