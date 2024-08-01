#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "r");

    if (fptr)
        printf("FILE IS PRESENT\n");
    else
        printf("FILE IS NOT PRESENT\n");

    FILE *fptr2;
    fptr2 = fopen("new1.txt", "r");
    if (fptr2)
        printf("FILE IS PRESENT\n");
    else
        printf("FILE IS NOT PRESENT\n");
}