import random
#隨機取數統計
arr = [0]*6

for i in range(6000):
    dice = random.randrange(1,7)
    arr[dice-1] += 1

for l in range(1,7):
    print(arr[l-1])
