#author : @akash kumar
#indin


#logic function
def solve(a):
   


for t in range(1,int(input()+1)):
   a=[]
   for i in range(3):
       tmp=list(map(int,input().split()))
       a.append(tmp)
   print("Case #"+str(t)+": ")
   solve(a)

