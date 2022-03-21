def sum_and_product(n):
      s,p=0,1
      while(n):
          r=n%10
          s=s+r
          p=p*r
          n=n//10
      return s,p


def solve(a,b):
    ans=0
    for i in range(a,b+1):
        s,p=0,0
        s,p=sum_and_product(i)
        if p%s==0:
           ans+=1
    return ans
         
for t in range(int(input())):
     a,b=map(int,input().split())
     print("Case #"+str(t+1)+": ",solve(a,b))
