#include<stdio.h>
int main()
{
    int ch='a';
    switch(ch)
    {
        case 'b':
            printf("look at 10 ideas\n");break;
        case ('b' + 'a'):
            printf("ideas will fly\n");break;
        case 'A':
            printf("project your good idea\n");
    }
    return 0;
}