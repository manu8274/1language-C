#include<stdio.h>

void main()
{
    char s;
    int nos;
    printf("enter the class and no of subject failed :");
    scanf("%c %d",&s,&nos);

    switch(s)
    {
        case 'f':
            switch(nos)
            {
                case 1:
                case 2:
                case 3:
                    printf("5 grace marks per subject");
                    break;
                default:
                    printf("no grace marks");
                    break;
            }
            break;
        case 's':
            switch (nos)
            {
                case 1:
                case 2:
                    printf("4 grace mraks per subject");
                    break;
                default:
                    printf("no grace marks");
                    break;
            }
            break;
        case 't':
            switch(nos)
            {
                case 1:
                    printf("5 grace marks");
                    break;
                default:
                    printf("nb grace marks");
                    break;
            }
            break;
    }
}