import math
#面積/周長

Radius = float(input('Radius:?'))
Perimeter = 2*math.pi*Radius
Area   = math.pi*Radius**2
print('Perimeter:',Perimeter)
print('Area:',Area)
#閏年
Year = int(input('Year:?'))
if(Year%4==0 and Year%100!=0 or Year%400==0):
    print('is_leap')
else:
    print('is_not_leap')

