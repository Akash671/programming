class Solution:
    def bin_to_deci(self,num):
        ans=0
        base=1
        #1001=9
        while(num):
            r=num%10 #r=1,0,0,1
            ans=ans+r*base #1*1+0*2+0*4+1*8=9
            base=base*2 # 2,4,8
            num=num//10 #100,10,1,0
        return ans

if __name__=='__main__':
    T=int(input())
    for i in range(T):
        num=int(input())
        ob=Solution()
        ans=ob.bin_to_deci(num)
        print(ans)
