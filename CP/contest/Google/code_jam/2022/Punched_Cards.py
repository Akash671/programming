#author : @akash kumar
#indin

#logic function
def solve(t):
   r,c=map(int,input().split())
   R=2*r+1
   C=2*c+1

   print("Case #"+str(t)+": ")
   #for 1st row
   for i in range(C):
      if i<=1:
         print(".",end="")
      elif i%2==0:
         print("+",end="")
      else:
         print("-",end="")
   #for 2nd row
   print("")
   for i in range(C):
     if i<=1:
       print(".",end="")
     elif i%2==0:
       print("|",end="")
     else:
       print(".",end="")
   #for remaining row
   print("")
   for i in range(R-2):
      for j in range(C):
         if i%2==0:
            if j%2==0:
               print("+",end="")
            else:
               print("-",end="")
         else:
            if j%2==0:
               print("|",end="")
            else:
               print(".",end="")
      print("")

for t in range(1,int(input())+1):
   solve(t)

