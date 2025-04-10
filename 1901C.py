for _ in range(int(input())):
    n = int(input()); a = list(map(int, input().split()))
    res=[]; x, y = min(a), max(a)
    while x!=y: res.append(x); y = (x+y)//2
    print(len(res))
    if len(res)<=n: print(*res)