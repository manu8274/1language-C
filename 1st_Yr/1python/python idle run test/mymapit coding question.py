n=int(input())
lst=[]
for i in range(n):
    data=int(input())
    lst.append(data)
print(lst)
a=n
w=n
sum=[]
for j in range(0,a):
    b=n-1
    while b>j:
        z=lst[j]+lst[b]
        sum.append(z)
        b=b-1
print(sum)
k=max(sum)
print(k)
for l in range(0,w):
    c=n-1
    while c>l:
        f=lst[l]+lst[c]
        if k==f:
            m=lst[l]
            n=lst[c]
            print(m,n)
        c=c-1
