import random,time
while True:
    x=int(input("Enter the number of players:"))
    players=[]
    for i in range(x):
        name=input("enter name for player:(all upper case)")
        players.append(name)
    print("players name=",players)
    king=random.randint(0,x-1)
    king_name=players[king]
    print("king's name is ",king_name)
    players.remove(king_name)
    print("thief is present in:",players)
    thief=random.randint(0,x)
    while thief==king:
        thief=random.randint(0,x)
    thief_name=players[thief]
    print('''For the king:
             Enter the name of thief that u think in upper case''')
    for i in range(2):
        print("you only get two try")
        t=input()
        if t==thief_name:
            print("congrats you got it right in ",i+1," try")
        else:
            print("ooooh,Try again")
    print("New Game is starting")
    time.sleep(1)
