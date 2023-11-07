#include<stdio.h>
void main()
{
    char x;
    printf("enter the alphabet in lower case:");
    scanf("%c",&x);

    switch (x)
    {
        case 'a': 
            printf("%c is vowel.",x);
            break;
        case 'e':
            printf("%c is vowel.",x);
            break;
        case 'i':
            printf("%c is vowel.",x);
            break;
        case 'o':
            printf("%c is vowel.",x);
            break;
        case 'u':
            printf("%c is vowel.",x);
            break;
        default:
            printf("%c is consonent.",x);
            break;
    }
}