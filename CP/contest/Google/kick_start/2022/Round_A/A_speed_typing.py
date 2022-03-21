def solve(I,P):
         i,j=0,0
         while(i!=len(I) and j!=len(P)):
            if I[i]==P[j]:
                i+=1
                j+=1              
            else:
               j+=1
         if i==len(I):
            return len(P)-len(I)
         else:
            return "IMPOSSIBLE"
for t in range(int(input())):
     I=str(input())
     P=str(input())
     print("Case #"+str(t+1)+": ",solve(I,P))
     
