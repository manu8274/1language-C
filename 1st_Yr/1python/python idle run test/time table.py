import random

x=int(input("enter the number of subjects:"))
subject=[]
for i in range(x):
    subj=input("enter subjects:")
    subject.append(subj)
days=["mon","tue","wed","thu","fri"]
table=[["9am-11am","11am-1pm","1pm-3pm","3pm-5pm","5pm-7pm"]]
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
