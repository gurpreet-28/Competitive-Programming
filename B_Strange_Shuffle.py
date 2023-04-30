n = int(input())
l=[]
for i in range(1,n+1):
    l.append(i)
p=1
while(len(l)>=1):
    print(l)
    print(l[0], end="\t")
    l.remove(l[0])
    if p==1:
        lst = []
        for i in range((int)((len(l))//2),len(l)):
            lst.append(l[i])
        for i in range(0,(int)(len(l))//2):
            lst.append(l[i])
        l=lst
    else:
        l=l[::-1]
    p^=1