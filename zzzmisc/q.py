lst=list(map(int,input().split()))
smax=max(lst)
i1,i2=0,0
n=len(lst)
for i in range(n):
    for j in range(i,n):
        sum1=sum(lst[i:j])
        if(sum1>smax):
            smax=sum1
            i1,i2=i,j
print(smax)