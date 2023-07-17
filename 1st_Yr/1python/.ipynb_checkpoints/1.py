import time
print("Your password is your name@123")
time.sleep(1)
name=input("Enter your name:")
password=input("Enter your passwrd:")
score=0
question=0
cq=0
wq=0
while (password==name+"@123"):
    time.sleep(1)
    print('''Hello welcome to gk troubles''')
    time.sleep(1)
    print('''Q1) Who is the president of current India?
                a)Mr.Rajeev Ghandhi
                b)Mrs.Droupadi Murmu
                c)Mr.Narendra Modi
                d)Mrs.Sonia Ghandhi''')
    ans1=input("Enter your answer:")
    if ans1=="b":
        print("correct answer")
        score=score + 2
        question+=1
        cq+=1
    else:
        print("wrong answer")
        question+=1
        wq+=1
        break
        
    time.sleep(1)
    print('''Q2)Who is the vice president of current India?
                a)Mr.Rajeev Ghandhi
                b)Mr.Venkaiah Naidu
                c)Mr.Jagdeep Dhankhar
                d)Mr.Rahul Ghandhi''')
    ans2=input("Enter your answer:")
    if ans2=="c":
        print("correct answer")
        score=score+2
        question+=1
        cq+=1
    else:
        print("wrong answer")
        question+=1
        wq+=1
        break
        
    time.sleep(1)
    print('''Q3)Who is the foreign minister of current India?
                a)Mr.Subrahmanyam Jaishankar
                b)Ms.Hina Rabbani Khar
                c)Mr.Anil vij
                d)Mr. Rajnath Singh ''')
    ans3=input("Enter your answer:")
    if ans3=="a":
        print("correct answer")
        score=score+2
        question+=1
        cq+=1
    else:
        print("wrong answer")
        question+=1
        wq+=1
        break
        
    time.sleep(1)
    print('''Q4)Who is the defence minister of current India?
                a)Mr.Manohar Parrikar
                b)Ms.Hina Rabbani Khar
                c)Ms.Nirmala Sitharaman
                d)Mr. Rajnath Singh ''')
    ans4=input("Enter your answer:")
    if ans4=="d":
        print("correct answer")
        score=score+2
        question+=1
        cq+=1
    else:
        print("wrong answer")
        question+=1
        wq+=1
        break
        
    print('''Q5)Who is the health minister of current India?
                a)Dr.Bharati Pravin Pawar 
                b)Dr.Anil Vij
                c)Dr.Mansukh Mandaviya
                d)Dr.Harsh Vardhan ''')
    ans5=input("Enter your answer:")
    if ans5=="a":
        print("correct answer")
        score=score+2
        question+=1
        cq+=1
    else:
        print("wrong answer")
        question+=1
        wq+=1
        break
        
else:
    print("pls try again")
print("Total question attempted:",question)
print("number of correct answer:",cq)
print("number of wrong answer",wq)
print("total score:",score)
