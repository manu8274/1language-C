#cafe instructions
#cafe order
#main

import time 
import random
import math
def pay():
    print("Enter your choice to pay through UPI:")
    time.sleep(0.3)
    print('''a)Google pay
             b)Paytm
             c)PhonePe
             d)BHIM UPI''')
    b=input()
    if (b=="a"):
        time.sleep(0.2)
        c=input("Enter your Gpay ID:")
        time.sleep(0.1)
        print("Checking your ID")
        time.sleep(0.25)
        print("Confirming  payment")
        time.sleep(0.2)
        print("PROCESSING.")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".")
        time.sleep(0.5)
        print("payment successfull")
    elif (b=="b"):
        time.sleep(0.2)
        c=input("Enter your Paytm ID:")
        time.sleep(0.1)
        print("Checking your ID")
        time.sleep(0.25)
        print("Confirming  payment")
        time.sleep(0.2)
        print("PROCESSING.")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".")
        time.sleep(0.5)
        print("payment successfull")
    elif (b=="c"):
        time.sleep(0.2)
        c=input("Enter your PhonePe ID:")
        time.sleep(0.1)
        print("Checking your ID")
        time.sleep(0.25)
        print("Confirming  payment")
        time.sleep(0.2)
        print("PROCESSING.")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".")
        time.sleep(0.5)
        print("payment successfull")
    elif (b=="c"):
        time.sleep(0.2)
        c=input("Enter your BHIM UPI ID:")
        time.sleep(0.1)
        print("Checking your ID")
        time.sleep(0.25)
        print("Confirming  payment")
        time.sleep(0.2)
        print("PROCESSING.")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".",end="")
        time.sleep(0.5)
        print(".")
        time.sleep(0.5)
        print("payment successfull")
    else:
        print("pls choose correct option")
        pay()
        
#main  
flag=True
while flag==True:
    print("welcome to cafe")
    time.sleep(0.3)
    print('''where would you like to place your order ?''')
    time.sleep(0.3)
    print('''        a)Indian Chat Bhandaar
        b)Chai Chaska Bar
        c)La Pino's Pizza ''')
    x=input("Enter your choice(a/b/c):")
    time.sleep(0.3)
    while True :
        if x=="a":
            print("welcome to Indian Chat Bhandaar")
            time.sleep(0.5)
            print("what would you like to eat:")
            time.sleep(0.3)
            print('''        a)Noodles            30 Rs
                b)Dosa               150 Rs 
                c)Burger             60 Rs
                d)Pav Bhaji          150 Rs
                e)Tikki              80 Rs
                f)Chole Bhature      200 Rs''')
            y=input("Enter your choice:") 
            z=int(input("How many do you want:"))
            time.sleep(0.3)
            if y=="a":
                print("You ordered Noodles")
                time.sleep(0.2)
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Noodle")
                time.sleep(0.5)
                print("Total payment =",z*30)
                pay()
                flag=False
            elif (y=="b"):
                print("You ordered",z," Dosa")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Dosa")
                time.sleep(0.5)
                print("Total payment =",z*150)
                pay()
                flag=False
            elif (y=="c"):
                print("You ordered",z," Burger")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Burger")
                time.sleep(0.5)
                print("Total payment =",z*60)
                pay()
                flag=False
            elif (y=="d"):
                print("You ordered",z," Pav Bhaji")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Pav Bhaji")
                time.sleep(0.5)
                print("Total payment =",z*150)
                pay()
                flag=False
            elif (y=="e"):
                print("You ordered",z," Tikki")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Tikki")
                time.sleep(0.5)
                print("Total payment =",z*80)
                pay()
                flag=False
            elif (y=="f"):
                print("You ordered",z," Chole Bhature")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Chole Bhature")
                time.sleep(0.5)
                print("Total payment =",z*200)
                pay()
                flag=False
            else:
                print("You choose  wrong option")
                False
        elif x=="b":
            print("Welcome to Chai Chaska Bar")
            time.sleep(0.5)
            print("what would you like to drink:")
            time.sleep(0.3)
            print('''        a)Coffee         20 Rs
                b)Chai           12 Rs   
                c)Cold Coffee    25 Rs
                d)Biscuit        20 Rs
                e)Rusk           40 Rs''')
            y=input("Enter your choice:")
            z=int(input("How many do you want:"))
            time.sleep(0.3)
            if y=="a":
                print("You ordered ",z," Coffee")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Coffee")
                time.sleep(0.5)
                print("Total payment =",z*20)
                pay()
                flag=False
            elif (y=="b"):
                print("You ordered",z," Chai")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Chai")
                time.sleep(0.5)
                print("Total payment =",z*12)
                pay()
                flag=False
            elif (y=="c"):
                print("You ordered",z," Cold Coffee")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Cold Coffee")
                time.sleep(0.5)
                print("Total payment =",z*25)
                pay()
                flag=False
            elif (y=="d"):
                print("You ordered",z," Biscuit")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Biscuit")
                time.sleep(0.5)
                print("Total payment =",z*20)
                pay()
                flag=False
            elif (y=="e"):
                print("You ordered",z," Rusk")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Rusk")
                time.sleep(0.5)
                print("Total payment =",z*40)
                pay()
                flag=False
            else:
                print("You choose  wrong option")
                False
        elif x=="c":
            print("Welcome to La Pino's Pizza")
            time.sleep(0.5)
            print("Which pizza would you like to eat:")
            time.sleep(0.3)
            print('''        a)Small Size            150 Rs
                b)Medium Size           200 Rs   
                c)Large Size            250 Rs''')
            y=input("Enter your choice:")
            z=int(input("How many do you want:"))
            time.sleep(0.3)
            if y=="a":
                print("You ordered ",z," Small Size Pizza")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Small Size Pizza")
                time.sleep(0.5)
                print("Total payment =",z*150)
                pay()
                flag=False
            elif (y=="b"):
                print("You ordered ",z," Medium  Size Pizza")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Medium Size Pizza")
                time.sleep(0.5)
                print("Total payment =",z*200)
                pay()
                flag=False
            elif (y=="c"):
                print("You ordered ",z," Large Size Pizza")
                a=input("Press enter to continue")
                time.sleep(0.3)
                print("You ordered",z," Large Size Pizza")
                time.sleep(0.5)
                print("Total payment =",z*250)
                pay()
                flag=False
            else:
                print("You choose  wrong option")
                False
