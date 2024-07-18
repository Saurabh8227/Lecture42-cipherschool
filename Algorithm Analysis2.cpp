INSERTION SORT(A)
for j= 2 to A.length
key=A[i]
// Insert A[j] into the sorted sequence A[1.. j-1]
i=j-1
while i>0 and A[i] > key
A[i+1] = A[i]
A[i+1] = A[i]
i=i-1
A[i+1] = key.

1 takes c1 times to run
i.e  c1n
2 takes c2 times to run 
i.e c1n + c2(n-1)
4 takes c4 times to run 
i.e c1n + c2(n-1) + c4(n-1)

We have the best case scenario and the worst case scenario.
