#include<stdio.h>

int sum(int a,int b){
    printf("operator sum is = %d",a+b);
}
int div(int a,int b){
    printf("operator division is = %d",a/b);
}
int product(int a,int b){
    printf("operator product is = %d",a*b);
}
int sub(int a,int b){
    printf("operator sub is = %d",a-b);
}

int main(){
    int a,b,c;
    printf("Enter number");
    scanf("%d %d",&a,&b);
    int (*ptr[])(int,int)={sum,div,product,sub};//ie 0 index=sum funct , 1 index=div func,2index=
    printf("\nenter your choice (0,1,2,3,4):");
    scanf("%d",&c);
    while(c<=4){
        (*ptr)(a,b);
        printf("\nenter your choice (1,2,3,4):");
        scanf("%d",&c);
    }
}