a1,b1=map(int,input().split())
a2,b2=map(int,input().split())

a,b=a1*b2+a2*b1,b1*b2
#print(a,b)

import math
common=math.gcd(a,b)
#print(common)
a=a//common
b=b//common
print(str(a)+"/"+str(b))
