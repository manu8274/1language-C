n=int(input())
lst=list(map(int,input().split()))
c=0
for i in range(n-1):
    x=lst[i]-lst[i+1]
    if(x>0):
        lst[i+1]=lst[i+1] + x
        c+=x
print(c)