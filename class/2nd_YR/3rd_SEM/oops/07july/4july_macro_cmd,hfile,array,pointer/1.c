#include<stdio.h>

//object like macro
#define PI 3.14
//function like macro
#define area(r) (PI*r*r)

void main(){
    //declare radius
    int r;
    scanf("%d",&r);
    printf("%f",area(r));
    printf("\ntime=%ld",__TIME__);
    printf("\ndate=%ld",__DATE__);
    printf("\nline=%d",__LINE__);
}
