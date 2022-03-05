def funct(l1, l2):
    s = len(set(l1+l2))
    return s


for t in range(int(input())):
    n = int(input())
    l = input().split()
    a = {}
    for i in l:
        p = i[1:]
        if p in a:
            a[p].append(i[0])
        else:
            a[p] = [i[0]]
    b = list(a.keys())
    s = 0
    for i in range(len(a)):
        for j in range(i+1, len(a)):
            ans = funct(a[b[i]], a[b[j]])
            s += (ans-len(a[b[i]]))*(ans-len(a[b[j]]))
    print(2*s)
