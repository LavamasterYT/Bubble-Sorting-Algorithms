from random import randrange

num = [None] * 20

def Swap(index, sindex):
    x = num[index]
    y = num[sindex]

    num[index] = y
    num[sindex] = x

for i in range(len(num)):
    num[i] = randrange(100) + 1

print(num)

done = False
flag = False

while done == False:
    flag = False
    for i in range(len(num)):
        if i < len(num) - 1:
            if num[i] > num[i + 1]:
                flag = True
                Swap(i, i + 1)
    
    print(num)

    if flag == False:
        done = True
        break

input()