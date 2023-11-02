n=int(input())
sum=n*(n+1)//2
if(sum%2!=0 or n<=2):
    print("NO")
elif(n==3):
    print("YES")
    print(2)
    print(1,2)
    print(1)
    print(3)
else:
    print("YES")
    s=sum//2
    lsteven=[]
    k=0
    le=0
    lstodd=[]
    lo=0 
    for i in range(2,n+1,2):
        if(s-k)%2!=0 and s-k<n:
            lsteven.append(s-k)
            le+=1
            break
        elif(i==n):
            
        else:
            k+=i
            lsteven.append(i)
            le+=1
    for i in range(1,n+1,2):
        if(i!=s-k):
            lstodd.append(i)
            lo+=1
    lsteven.sort()
    if(s-k==1):
        print(le)
        print(*(lsteven))
        print(lo)
        print(*(lstodd))
    else:
        print(lo)
        print(*(lstodd))
        print(le)
        print(*(lsteven))