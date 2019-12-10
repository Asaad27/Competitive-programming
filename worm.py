n = int(input())
a = list(map(int, input().rsplit()))
m = int(input())
q = list(map(int, input().rsplit()))

b = []
a0 = 0
for i in range(n):
    j = a0 + 1
    while j <= a[i] + a0:
        b.append(i + 1)
        j += 1
    a0 = a[i]

for j in range(m):
    print(b[q[j]-1])