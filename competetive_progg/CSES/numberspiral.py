for i in range(int(input())):
    i,j=map(int,input().split())
    if(max(i,j)==i):
        if(i%2==0):
            print(i*i -(j-1))
        else:
            print((i-1)*(i-1) + j)
    else:
        if(j%2==0):
            print((j-1)*(j-1) +i)
        else:
            print(j*j -(i-1))