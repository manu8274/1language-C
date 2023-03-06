#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    char s[100];
    scanf("%s",&s);
    char sen[100];
    scanf("%[^f]s", sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("%s",sen);
}