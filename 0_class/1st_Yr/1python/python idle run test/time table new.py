import random

x=int(input("enter the number of subjects:"))
subject=[]
for i in range(x):
    subj=input("enter subjects:")
    subject.append(subj)
table=[[]]
for i in range(x):
    t=input("Enter time for class:")
    table[0].append(t)
days=["mon","tue","wed","thu","fri"]
for i in days:
    i=[]
    c=0
    j=1
    while j>0:
        c=random.choice(subject)
        if c not in i:
            i.append(c)
        if len(i)==x:
            break
        j+=1
    table.append(i)
    
for i in range(len(table)):
    for j in range(len(table[i])):
        print(table[i][j],end="    ")
    print()
