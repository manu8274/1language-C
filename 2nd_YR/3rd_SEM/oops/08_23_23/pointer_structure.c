//to make pointer structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int main(){
//     int *ptr1=NULL;
//     int*ptr2,*ptr3=NULL;
//     int x=10,y=20;
//     printf("ptr2 size before initialise is : %d \n",sizeof(ptr2));
//     ptr2=&y;
//     printf("ptr2 size after initialise is : %d \n",sizeof(ptr2));
//     ptr1=&x;
//     printf("value of x : %d \n",x);
//     printf("value of x variable memory address : %d \n",&x);
//     printf("value of ptr1 : %d \n",ptr1);
//     printf("value of ptr1 size : %d \n",sizeof(ptr1));
// }
struct Emp{
    int id;
    char name[10];
};
int main(){
    struct Emp *e;
    int totalemp;
    printf("Enter Total Employee: ");
    scanf("%d",&totalemp);
    e=(struct Emp*) malloc(totalemp*sizeof(struct Emp));// to make pointer structure
    for (int i=0;i<totalemp;i++){
        printf("\nEnter emp name:");
        scanf("%s",(e+i)->name);//its an character array so no use &
        printf("\nEnter emp id:");
        scanf("%d",&(e+i)->id);//->is pointing the number to its variable
        
    }
    for (int i=0;i<totalemp;i++){
        printf("emp id:%d\temp name:%s\n",(e+i)->id,(e+i)->name);
    }
}