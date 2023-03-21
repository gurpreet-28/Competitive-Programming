w, h, n = map(int, input().split())

def func(w,h,n,m):
    if(((int)(m/w))*((int)(m/h))>=n):
        return True
    return False

l=0
r=h*w*n
ans=1e36
while l<=r:
    m=(int)(l+(r-l)/2)
    if func(w,h,n,m):
        ans=min(ans,m)
        r=m-1
    else:
        l=m+1
ans=min(ans,9223372036854775807)
print(ans)
