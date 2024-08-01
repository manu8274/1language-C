#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "a");
    return 0;
}