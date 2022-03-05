def hell(n,m):
    pow1=2
    ans=1
    while n>0:
        if n%2==1:
            ans=(ans*pow1)%m
        pow1=(pow1*pow1)%m
        n>>=1
    return ans
for i in range (int(input())):
    n=int(input())
    print(hell(n-1,10**9+7))