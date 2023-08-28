// #include<stdio.h>
// #include<string.h>

// struct stu{
//     int roll;
//     char name[10];
// };
// void display(struct stu s2){
//     printf("your name:%s\t",s2.name);
//     printf("your roll:%d",s2.roll);
// }

// int details(struct stu *s1){
//     printf("\nenter name:");
//     scanf("%s",s1->name);//array of character so index changes so not used ampersand
//     printf("\nenter roll:");
//     scanf("%d",&s1->roll);

// }
// int main(){
//     struct  stu s1;
//     int nos;
//     printf("enter the number of students:");
//     scanf("%d",&nos);
//     for(int i=0;i<nos;i++){
//         details(&s1);
//         display(s1);
//     }
// }



//struct array :::::::::::::::::::::::
#include<stdio.h>
#include<string.h>
struct stu{
    int roll;
    char name[10];
};
void display(struct stu s2){
    printf("your name:%s\t",s2.name);
    printf("your roll:%d\n",s2.roll);
}

int details(struct stu *s1){
    printf("\nenter name:");
    scanf("%s",s1->name);//array of character so index changes so not used ampersand
    printf("\nenter roll:");
    scanf("%d",&s1->roll);

}
int main(){
    int nos;
    printf("enter the number of students:");
    scanf("%d",&nos);

    struct  stu s1[nos];
    for(int i=0;i<nos;i++){
        details(&s1[i]);
    }
    for(int i=0;i<nos;i++){
        display(s1[i]);
    }
}

