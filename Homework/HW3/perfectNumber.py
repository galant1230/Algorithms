N = int(input())
IN = list(map(int, input().split(' ')))

def perfect_number(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum += x
    return sum == n

perfectList = []
for i in IN:
    if perfect_number(i):
        perfectList.append(i)
    else:
        continue

for i in range(len(perfectList)):
    if i == len(perfectList)-1:
        print(perfectList[i])
    else:
        print(perfectList[i], end='')
        print(' ', end='')
