import time
'''
for _ in range (3600):
    print("Hello World")
    time.sleep(1)
#import time 可以不用設變數，假設要跑3600遍，甚至不用有變數出現，所以變數那格設底線也行
#time.sleep(1)是等一秒的概念
'''

'''
input = 0
#(1,100)->一個是頭，一個是尾，所以會從頭跑到(尾-1)
#(1,100,2)->會隔一個2 像是(1,3,5,7,9)
for i in range (1,101,2):
    input+=i

print(input)
'''

'''
tot=0
i=1
while True:
    tot+=i
    i+=1
    if(i>100):break

print(tot)
'''
#質數遊戲
'''
input1 = int(input("輸入數字烙鐵?"))
end    = int(input1**(0.5))+1
is_prime = True
if (input1 <= 2):
    print("烙鐵這是質數\n")
else:
    for i in range(2,end):
        if input1%i==0:
            is_prime = False
            break
        else:
            continue

if(is_prime):
    print("烙鐵這是質數\n")
else:
    print("烙鐵你瞎阿\n")
'''
#最大公因數
input1 = int(input("第一個啦北七?"))
input2 = int(input("第二個啦北七?"))

while input2%input1!=0:
    temp1 = input2%input1
    temp2 = input1
    input2 = input1
    input1 =temp1

print("我超屌",input1)

#猜數字
import random

answer = random.randrange(1, 101)
counter = 0
while True:
    counter += 1
    num = int(input('请输入: '))
    if num < answer:
        print('大一点.')
    elif num > answer:
        print('小一点.')
    else:
        print('猜对了.')
        break
print(f'你一共猜了{counter}次.')
