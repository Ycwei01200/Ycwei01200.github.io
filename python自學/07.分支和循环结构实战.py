'''
#0~100質數
for i in range(2,101,1):
    l = int((i)**(0.5))
    check = bool(True)
    for j in range(2,l+1,1):
        if i%j==0 :
            check = False
            break

    if check == False:
        print(i,"Not a Prime Number\n")
    else:
        print(i,"Prime Number\n")
'''
'''
#費伯納西
a = 0
b = 1
pass_num = a
curr_num = b

for i in range(1,21,1):

    next_num = (curr_num+pass_num)
    print(next_num)
    pass_num = curr_num
    curr_num = (next_num)
'''

#花旗骰
import random

money = 1000
turn = 1
first_time = True
while money > 0:
    print("你的錢有",money)

    if first_time == False:
        ans = input("是否繼續？(y/n): ")
        if ans.lower() != 'y':
            print("遊戲結束！")
            break

    input_money = int(input("下注金額:"))
    while input_money > money:
        print("請重新下注")
        input_money = int(input("下注金額:"))

    d1 = random.randrange(1, 7)
    d2 = random.randrange(1, 7)


    if first_time :
        if d1+d2 == 7 or d1+d2 == 11:
            turn += 1
            print("骰子分別為 ", d1, "跟", d2)
            print("這是第", turn, "輪: ", "玩家勝利\n")
            money += input_money

        elif d1+d2 == 2 or d1+d2 == 3 or d1 + d2 == 12:
            turn += 1
            print("骰子分別為 ", d1, "跟", d2)
            print("這是第", turn, "輪: ", "莊家勝利\n")
            money -= input_money

        else:
            print("沒輸沒贏")
            turn += 1
            last_dice = d1 + d2
            first_time = False
            continue
    else:
        if last_dice == d1 + d2 :
            turn += 1
            print("骰子分別為 ", d1, "跟", d2)
            print("這是第", turn, "輪: ","玩家勝利\n")
            money += input_money

        elif d1 + d2 == 7:
            turn += 1
            print("骰子分別為 ", d1, "跟", d2)
            print("這是第", turn, "輪: ","莊家勝利\n")
            money -= input_money

        else:
            print("沒輸沒贏")
            turn += 1
            last_dice = d1 + d2


            continue


if money <= 0 :print("你沒錢了\n")
