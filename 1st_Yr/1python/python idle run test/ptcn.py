while True:
    N=int(input())
    for i in range(0,N,2):
        for j in range(1,N+1):    
            print(N*i+j,end=" ")
        print()
    for i in range(N-1,0,-2):
        for j in range(1,N+1):
            print(N*i+j,end=" ")
        print()
