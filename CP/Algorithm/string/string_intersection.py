a=str(input())
b=str(input())

ans=set(a).intersection(b)
#print(ans)
if(len(ans)!=0):
  print("Yes")
else:
  print("No")
