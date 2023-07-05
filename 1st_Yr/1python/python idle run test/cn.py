#CREATE A STRING
str1=input()
#INITIALISE AN EMPTY LIST
word_count={}
#WILL PERFORM A WORD COUNT USING DICT
for i in range(len(str1)):
    if str1[i]!=str1[i-1]:
        word_count[i]=1
    else:
        word_count[i]+=1 
# PRINT OUTPUT
print(word_count)
