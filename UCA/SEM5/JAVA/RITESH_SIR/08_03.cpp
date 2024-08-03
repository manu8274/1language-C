#include <stdio.h>

int main()
{
    int n = -10;
    char c = (char)n;
    n = n >> 31;
    printf("%d", n);
}