// #include<stdio.h> //macro #include 1st macro
// #define PI 3
// #define file_size 5
// #undef file_size 
// #if !defined(MESSAGE)
//     #define MESSAGE "your wish...."
// #endif
// int main(){
//     printf("%d\n",PI);
//     printf("%s",MESSAGE);
//     return 0;
// }
// int main(){
//     // printf("Number of line in code %d\n" ,__LINE__);
//     // printf("Number of line in code %s\n" ,__DATE__);
//     // printf("Number of line in code %s\n" ,__TIME__);
//     // printf("Number of line in code %s\n" ,__FILE__);
//     // printf("Number of line in code %d\n" ,__STDC__);
//     // #ifdef __STDC__
//     //     printf("compiler with the c std");
//     // #else 
//     //     printf("compiler with not c std");
//     // #endif
//     // printf("Number of line in code %d\n" ,__LINE__);
//     printf("%d",PI);
//     #undef PI
//     // printF("%d",PI);
// }

// #include<stdio.h>
// #define AREA(s) s*s
// int main(){
//     printf("%d",AREA(5));
// }
/*print circle area using macro,directive,etc*/
#include<stdio.h>
#define AREA(s) 3.14*s*s
int main(){
    printf("%f",AREA(5));
}