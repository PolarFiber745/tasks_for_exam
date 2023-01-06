import math
import random

def p_next():
    flag = []
    flag.append(1)
    for i in range(30):
        flag.append(0)
    s = 1
    while s < k:
        j = random.randint(0, 30)
        if flag[j] == 0:
            p.append(simple[j])
            flag[j] = 1
            s=s+1
#это 3 задача
simple = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103,107, 109, 113, 127]
#это 4 задача
left = pow(2, 123)
check = 0
k = 7
p = []
p.append(2)
p_next()
n = 1
for i in range(k):
    n = n*p[i]
while n<left:
    i = random.randint(0, k-1)
    n = n*p[i]
n = n+1
print("n =", n)
#это 5 задача
ln_n = int(math.log2(n))
for a in range(2, ln_n+1):
    if check==1:
        break
    c = pow(a, n-1, n)
    for i in range(0, k):
        d = int((n-1)/p[i])
        e = pow(a, d, n-1)
        if  c==1 and e!=1:
            check = 1
            break
if check == 1:
    print("n is a prime number")
else:
    print("n is a composite number")