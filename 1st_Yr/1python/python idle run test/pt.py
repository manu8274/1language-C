N=int(input())
i=1
while i<N+1:
    j=1
    while j>=N:
        if j>=N-i:
            print(N-j+i,end="")
        else:
            print()
        j+=1
    i+=1
    
