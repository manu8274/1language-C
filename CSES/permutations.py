n=int(input())
if(n==2 or n==3):
    print("NO SOLUTION")
else:
    lst=[i for i in range(n,0,-1) if i%2!=0]
    lst1=[i for i in range(n,0,-1) if i%2==0]
    print(*(lst),end=" ")
    print(*(lst1))