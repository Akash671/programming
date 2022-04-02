#author : @akash kumar
#india


#logic function
def solve(t):
   n=int(input())
   s=list(map(int,input().split()))
   s=sorted(s)
   #print(s)
   ans=0
   c=1
   for i in range(n):
      if s[i]>=c:
         ans+=1
         c+=1
   print("Case #"+str(t)+": "+str(ans))


for t in range(1,int(input())+1):
   solve(t)
