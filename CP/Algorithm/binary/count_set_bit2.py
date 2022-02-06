for _ in range(int(input())):
    L,K=map(int,input().split())

    def count_set_bit(n):
        b=bin(n)
        b=b[2:]

        ans=0
        s=str(b)
        return s.count('1')
    ans=0
    while(ans<K):
       ans+=count_set_bit(L)
       L=L+1
    print(L-1)
