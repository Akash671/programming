class Solution:
   def solve(self,num):
       ans=""
       while(num):
          r=num%2
          num=num//2
          ans+=str(r)
       ans=ans[::-1]
       return int(ans)

if __name__=='__main__':
    num=int(input())
    ob=Solution()
    ans=ob.solve(num)
    print(ans)
