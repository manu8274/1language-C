s=input()
m=1
mm=0
for i in range(len(s)-1):
    if(s[i]==s[i+1]):
        m=m+1
    else:
        mm=max(mm,m)
        m=1
print(max(mm,m))