from random import *

length1 = randint(0, 10)
length2 = randint(0, 10)

l1 = list()
l2 = list()

for i in range(length1):
    l1.append(randint(0, 20))

for i in range(length2):
    l2.append(randint(0, 20))

l1.sort()
l2.sort()

print(l1)
print(l2)

l3 = l1 + l2
l3.sort()

print(l3)

if len(l3) % 2 == 0:
    print("It's even length")
else:
    print("It's odd length")

print("Middle: %d" % (l3[int(len(l3) / 2)]))
