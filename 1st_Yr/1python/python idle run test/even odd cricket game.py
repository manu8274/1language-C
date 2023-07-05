#program start
import time
import random 

print('''                          WELCOME TO EVEN ODD CRICKET GAME                          ''')
time.sleep(0.3)
print('''INSTRUCTIONS :
         1)You and compueter will choose numbers and if their sum is even then you win the toss else computer wins the toss. 
         2)Player only have one wicket.
         2)You have to always choose a number between 0-6 while batting or bowling.
         3)If you choose same number as computer then if you are batting then you are out.
         4)If you choose same number as computer then if you are bowling then computer is out.
         5)If you choose a different  number else 0-6 then if you are batting then it will be treated as a dot ball.
         6)If you choose a different  number else 0-6 then if you are bowling then it will be treated as a no ball.You have to repeat the ball.
         7)No wide ball,No free hit,No run for no ball
         8)Computer will never ball a no ball
         9)game will comepelete only after 12 ball each player or both are out''')

time.sleep(8)
a=int(input("Do you wan to play cricket(Y=1,N=0):"))
if a==1:
    b=int(input("choose a number:"))
    c=random.randint(0,6)
    print("The number choosen by computer=",c)
    d=b+c
    if (d%2==0):
        print("sum is even")
        time.sleep(0.2)
        print("You won the toss")
        time.sleep(0.4)
        e=int(input("What do you choose (bat=1,ball=0):"))
        if e==1:
            time.sleep(0.3)
            print("----------You choose to bat----------")
            yourbatnum=0
            for i in range(12):
                time.sleep(0.3)
                f=int(input("choose a number(0-6):"))
                g=random.randint(0,6)
                if 0<=f<=6:
                    if f!=g:
                        yourbatnum=yourbatnum+f
                    else:
                        time.sleep(0.3)
                        print("You are out")
                        break
                else:
                    print("you chose wrong number(dot ball)")
            print("your score",yourbatnum)
            time.sleep(0.3)
            print("your batting is over")
            time.sleep(0.5)
            print("----------your turn to ball----------")
            compbatnum=0
            for j in range(12):
                time.sleep(0.3)
                h=int(input("choose a number(0-6):"))
                k=random.randint(0,6)
                if 0<=h<=6:
                    if h!=k:
                        compbatnum=compbatnum+k
                    else:
                        time.sleep(0.3)
                        print("computer is out")
                        break
                else:
                    print("no ball(ball not count)")
                    j=j-1
                print("computer's score=",compbatnum)
            time.sleep(0.5)
            print("Match is over")
            time.sleep(0.3)
            print("Calculating results")
            time.sleep(0.3)
            if yourbatnum==compbatnum:
                print("Match is a tie")
            elif (yourbatnum>compbatnum):
                print("Congrats")
                time.sleep(0.2)
                print("You won the match")
            else:
                print("Oooh")
                time.sleep(0.2)
                print("you lost the match")
        elif (e==0):
            time.sleep(0.5)
            print("----------You choose to ball----------")
            compbatnum=0
            for j in range(12):
                time.sleep(0.3)
                l=int(input("choose a number(0-6):"))
                m=random.randint(0,6)
                if 0<=l<=6:
                    if l!=m:
                        compbatnum=compbatnum+m
                    else:
                        time.sleep(0.3)
                        print("computer is out")
                        break
                else:
                    print("no ball(ball and run not count)")
                    j=j-1
            print("computer's score=",compbatnum)
            time.sleep(0.2)
            print("Computer's batting is over")
            time.sleep(0.5)
            print("----------Your turn to bat----------")
            yourbatnum=0
            for i in range(12):
                time.sleep(0.3)
                n=int(input("choose a number(0-6):"))
                o=random.randint(0,6)
                if 0<=n<=6:
                    if n!=o:
                        yourbatnum=yourbatnum+n
                    else:
                        time.sleep(0.3)
                        print("You are out")
                        break
                else:
                    print("you chose wrong number(dot ball)")
            print("your score",yourbatnum)
            time.sleep(0.3)
            print("Match is over")
            time.sleep(0.2)
            print("Calculating result")
            time.sleep(0.2)
            if yourbatnum==compbatnum:
                print("Match is a tie")
            elif (yourbatnum>compbatnum):
                print("Congrats")
                time.sleep(0.2)
                print("You won the match")
            else:
                print("Oooh")
                time.sleep(0.2)
                print("you lost the match")
    else:
        time.sleep(0.2)
        print("sum is odd")
        time.sleep(0.2)
        print("Computer's turn to choose")
        print(".......choosing......")
        p=random.randint(0,1)
        if p==0:
            time.sleep(0.2)
            print("----------Computer choose to bat----------")
            compbatnum=0
            for j in range(12):
                time.sleep(0.3)
                l=int(input("choose a number(0-6):"))
                m=random.randint(0,6)
                if 0<=l<=6:
                    if l!=m:
                        compbatnum=compbatnum+m
                    else:
                        time.sleep(0.3)
                        print("computer is out")
                        break
                else:
                    print("no ball(ball not count)")
                    j=j-1
            print("computer's score=",compbatnum)
            time.sleep(0.2)
            print("Computer's batting is over")
            time.sleep(0.5)
            print("----------Copmuter's turn to ball----------")
            yourbatnum=0
            for i in range(12):
                time.sleep(0.3)
                n=int(input("choose a number(0-6):"))
                o=random.randint(0,6)
                if 0<=n<=6:
                    if n!=o:
                        yourbatnum=yourbatnum+n
                    else:
                        time.sleep(0.3)
                        print("You are out")
                        break
                else:
                    print("you chose wrong number(dot ball)")
            print("your score",yourbatnum)
            time.sleep(0.3)
            print("Match is over")
            time.sleep(0.2)
            print("Calculating result")
            time.sleep(0.2)
            if yourbatnum==compbatnum:
                print("Match is a tie")
            elif (yourbatnum>compbatnum):
                print("Congrats")
                time.sleep(0.2)
                print("You won the match")
            else:
                print("Oooh")
                time.sleep(0.2)
                print("you lost the match")
        else:
            time.sleep(0.3)
            print("----------Computer choose to ball----------")
            yourbatnum=0
            for i in range(12):
                time.sleep(0.3)
                f=int(input("choose a number(0-6):"))
                g=random.randint(0,6)
                if 0<=f<=6:
                    if f!=g:
                        yourbatnum=yourbatnum+f
                    else:
                        time.sleep(0.3)
                        print("You are out")
                        break
                else:
                    print("you chose wrong number(dot ball)")
            print("your score",yourbatnum)
            time.sleep(0.3)
            print("your batting is over")
            time.sleep(0.5)
            print("----------computer's turn to bat----------")
            compbatnum=0
            for j in range(12):
                time.sleep(0.3)
                h=int(input("choose a number(0-6):"))
                k=random.randint(0,6)
                if 0<=h<=6:
                    if h!=k:
                        compbatnum=compbatnum+k
                    else:
                        time.sleep(0.3)
                        print("computer is out")
                        break
                else:
                    print("no ball(ball not count)")
                    j=j-1
            print("computer's score=",compbatnum)
            time.sleep(0.5)
            print("Match is over")
            time.sleep(0.3)
            print("Calculating results")
            time.sleep(0.3)
            if yourbatnum==compbatnum:
                print("Match is a tie")
            elif (yourbatnum>compbatnum):
                print("Congrats")
                time.sleep(0.2)
                print("You won the match")
            else:
                print("Oooh")
                time.sleep(0.2)
                print("you lost the match")
    time.sleep(0.3)
    print("Thank your for playing")
    time.sleep(0.3)
    print("Pls give your feedback(number of stars(0-5)):")
    time.sleep(0.2)
    feedback=int(input())
    time.sleep(0.3)
    if 0<=feedback<=3:
        advice=input("Pls tell us what we can do to improve")
        time.sleep(0.2)
        print("Thank you.We are working on more improvement")
    else:
        print("Thank you.We are working on more improvement")
elif (a==0):
    time.sleep(0.3)
    print("thank you")
    
else:
    time.sleep(0.3)
    print("choose correct number")
    time.sleep(0.2)
    print("If you wan to play pls restart the game")
#program end
