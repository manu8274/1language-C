#include<stdio.h>

// struct stu{
//     int x;
// };
// int main(){
//     struct  stu *s1;
//     struct  stu s2={36};
//     s1=&s2;//s1 is holding the address of s2;
//     printf("%d\n",s2.x);
//     printf("%d\n",s1->x);// by using poiting arrow;
//     printf("%d\n",((*s1).x));//by doing dereference s1; 
// }


// struct stu{
//     int roll;
//     char name[10];
// };
// void display(struct stu s2){
//     printf("your name:%s\t",s2.name);
//     printf("your name:%d",s2.roll);
// }

// int main(){
//     struct  stu s1;
//     printf("enter name:");
//     scanf("%s",s1.name);//array of character so index changes so not used ampersand
//     printf("\nenter roll:");
//     scanf("%d",&s1.roll);
//     display(s1);   
// }

// struct stu{
//     int roll;
//     char name[10];
// };
// void display(struct stu s2){
//     printf("your name:%s\t",s2.name);
//     printf("your name:%d",s2.roll);
// }
// int details(struct stu s1){
//     printf("enter name:");
//     scanf("%s",s1.name);//array of character so index changes so not used ampersand
//     printf("\nenter roll:");
//     scanf("%d",&s1.roll);
//     display(s1);

// }
// int main(){
//     struct  stu s1;
//     details(s1);
// }

// struct stu{
//     int roll;
//     char name[10];
// };
// void display(struct stu s2){
//     printf("your name:%s\t",s2.name);
//     printf("your name:%d",s2.roll);
// }
// int details(struct stu *s1){
//     printf("enter name:");
//     scanf("%s",s1->name);//array of character so index changes so not used ampersand
//     printf("\nenter roll:");
//     scanf("%d",&s1->roll);

// }
// int main(){
//     struct  stu s1;
//     details(&s1);
//     display(s1);
// }

struct stu{
    int roll;
    char name[10];
};
void display(struct stu s2){
    printf("your name:%s\t",s2.name);
    printf("your roll:%d",s2.roll);
}
int details(struct stu *s1){
    printf("\nenter name:");
    scanf("%s",s1->name);//array of character so index changes so not used ampersand
    printf("\nenter roll:");
    scanf("%d",&s1->roll);

}
int main(){
    struct  stu s1;
    int nos;
    printf("enter the number of students:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++){
        details(&s1);
        display(s1);
    }
}