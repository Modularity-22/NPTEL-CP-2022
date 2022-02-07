# Problem Statement

# You have a set of N slips of different colors. The i-th slip has the number Li written on it.

# Suppose we have a set S of three slips with the numbers a, b, and c written on it. This collection of slips S is called a nice triplet if the numbers satisfy all the following conditions:

# a<b+c
# b<c+a
# c<a+b
# How many different nice triplets can be formed? Two collections of slips are considered different when there is a color that occurs in only one of them.


def findNumberOfTriangles(arr, n):
  
    count = 0
     
    
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if (arr[i] + arr[j] > arr[k] and
                    arr[i] + arr[k] > arr[j] and
                    arr[k] + arr[j] > arr[i]):
                    count += 1
    return count

n = int(input())

while n > 0:

    L = list(map(int, input().strip().split()))
    size = len(L)
    print(findNumberOfTriangles(L,size))

    n -= 1