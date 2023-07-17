    # FIND THE DETERMINANT OF A GIVEN SQUARE MATRIX
while True:
    row=int(input("Enter the number of rows: "))
    col=int(input("Enter the number of columns: "))
    row1=[]
    row2=[]
    row3=[]
    lst=[]
    if row==3 and col==3:
        for i in range(row):
            for j in range(col):
                if i==0:
                    x=int(input("Enter the value of first row:"))
                    row1.append(x)
                elif i==1:
                    x=int(input("Enter the value of second row :"))
                    row2.append(x)
                else:
                    x=int(input("Enter the value of third row :"))
                    row3.append(x)
        lst.append(row1)
        lst.append(row2)
        lst.append(row3)
    elif row==2 and col==2:
        for i in range(row):
            for j in range(col):
                if i==0:
                    x=int(input("Enter the value of first row:"))
                    row1.append(x)
                elif i==1:
                    x=int(input("Enter the value of second row :"))
                    row2.append(x)
        lst.append(row1)
        lst.append(row2)
        

    print("Your matrix is:")        
    for i in lst:
        print(i)
        
    #for finding determinant
    #1 2 3
    #1 2 3
    #1 2 3

    # 2 3
    # 3 5

    det=0
    s=0
    i=0
    if row==col:
        if row==3:
            if i==0:
                for j in range(col):
                    if j==0:
                        s=(((-1)**(i+j))*((lst[0][0])*(((lst[1][1])*(lst[2][2]))-((lst[2][1])*(lst[1][2])))))
                        det=det+s
                    elif j==1:
                        s=(((-1)**(i+j))*((lst[i][j])*(((lst[1][0])*(lst[2][2]))-((lst[2][0])*(lst[1][2])))))
                        det=det+s
                    else:
                        s=(((-1)**(i+j))*((lst[0][2]))*(((lst[1][0])*(lst[2][1]))-((lst[2][0])*(lst[1][1]))))
                        det=det+s
        elif row==2:
            if i==0:
                det=(((lst[0][0])*(lst[1][1]))-((lst[1][0])*(lst[0][1])))
        else:
            print("Order of matrix is greater than 3")
    else:
        print("not a square natrix")

    if row==col:
        print("det of matrix:",det)
