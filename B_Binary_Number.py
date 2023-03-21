binnum = input()
num = 0
binnum = binnum[::-1]
for i in range(len(binnum)):
    num += ((2**i) * int(binnum[i]));
ans = 0
while num!=1:
    if num%2==0:
        num/=2
    else:
        num+=1
    ans +=1
print(ans)