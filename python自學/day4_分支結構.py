
height = float(input("身高多少老鐵?"))
weight = float(input("體重多少烙鐵?"))

BMI = weight / ((height/100)**2)

if 18.5<=BMI<=24 :
    print("烙鐵，身材不錯啊，有點東西")
elif BMI<18.5 :
    print("烙鐵多吃點")
else:
    print("烙鐵你胖")



height = float(input('身高(cm)：'))
weight = float(input('体重(kg)：'))
bmi = weight / (height / 100) ** 2
print(f'{bmi = :.1f}')
if bmi < 18.5:
    print('你的体重过轻！')
elif bmi < 24:
    print('你的身材很棒！')
elif bmi < 27:
    print('你的体重过重！')
elif bmi < 30:
    print('你已轻度肥胖！')
elif bmi < 35:
    print('你已中度肥胖！')
else:
    print('你已重度肥胖！')
