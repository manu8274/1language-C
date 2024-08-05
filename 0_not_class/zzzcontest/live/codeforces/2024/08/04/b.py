for i in range(int(input())):
    n=int(input())
    e=0
    o=0
    mxe=-1
    mxo=-1
    l=list(map(int,input().split()))
    for i in l:
        if(i%2==0):
            e+=1
            mxe=max(mxe,i)
        else:
            o+=1
            mxo=max(mxo,i)
    if(mxe==-1 or mxo==-1):
        print(0)
    else:
        if(mxo>mxe):
            print(e)
        else:
            ans=0
            even=[i for i in l if i%2==0].sort()
            for i in even:
                if(i%2==0):
                    if(i>mxo):
                        ans+=2
                    else:
                        ans+=1
            print(ans)