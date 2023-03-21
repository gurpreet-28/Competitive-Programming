t = int(input())
while t:
    n = int(input())
    m = 1000000007
    ans = n*(n+1)*(2*n+1)
    ans /= 3
    # ans = int((ans+m) % m)
    ans -= ((n*(n+1))/2)
    # ans = int(ans % m)
    # ans += n*n
    ans *= 2022
    # ans = int((ans+m) % m)
    print(int(ans)%m)
    t-=1