s=str(input())
ans=""
for i in s:
   if i==" ":
       ans+="_"
   else:
      ans+=i
ans+=".cpp"
print(ans)
tmp=ans
tmp="cp tmp.cpp "+ans
print(tmp)
ans="g++ "+ans+" -o a"
print(ans)
