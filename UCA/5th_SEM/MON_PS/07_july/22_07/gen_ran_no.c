#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

// int main()
// {
    // //gen random number
    // srand(time(NULL)); // seed , to initialise , random number as time now , one time for life of program
    // for (int i = 0; i < 3; i++)
    //     printf("%d\n", rand());
    // srand(time(NULL));
    // printf("\n");
    // for (int i = 0; i < 3; i++)
    //     printf("%d\n", rand());
    // return 0;
// }
int main()
{
    // measuring program runtime
    struct timeval before;//get a value in structure
    gettimeofday(&before, NULL); // before gives two vale a number of sec and a number microsec
    long long before_millis = before.tv_sec * 1000LL + before.tv_usec / 1000;
    printf("HELLO \n");//LL signify long long
    struct timeval after;
    gettimeofday(&after, NULL);
    long long after_millis = after.tv_sec * 1000LL + after.tv_usec / 1000;

    printf("printf ran in : %lli millis", after_millis - before_millis);
    return 0;
}