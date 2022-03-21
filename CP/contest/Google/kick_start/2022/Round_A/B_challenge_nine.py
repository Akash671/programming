def d_sum(n):
   ans=0
   while(n):
      r=n%10
      ans+=r
      n=n//10
   return ans


def solve(n):
   d=d_sum(n)
   D=abs(9-d)

   a=[]
   if D==0:
      s=str(n)
      for i in range(len(s)):
          tmp=s[0:i+1]+"0"+s[i+1:len(s)]
          a.append(tmp)
   else:
      s=str(n)
      for i in range(len(s)):
           tmp=s[0:i+1]+str(D)+s[i+1:len(s)]
           a.append(tmp)
      tmp=str(D)+s
      a.append(tmp)
      #print(a)
      
   return int(min(a))
      
for t in range(int(input())):
     # I=str(input())
     # P=str(input())
     n=int(input())
     print("Case #"+str(t+1)+": "+str(solve(n)))
     
