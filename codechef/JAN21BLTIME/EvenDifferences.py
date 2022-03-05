t=int(input())
for x in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    o=0
    e=0
    for x in l:
        if(x%2==0):
            e+=1
        else:
            o+=1
    print(min(o,e))