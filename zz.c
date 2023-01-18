#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int num = 321,l;
    char snum[5];

    // convert 123 to string [buf]
    itoa(num, snum, 10);

    // print our string
    printf("%s\n", snum);
    l=strlen(snum);
    printf("%d",l);
}