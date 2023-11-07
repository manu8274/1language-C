//simple structure
#include<stdio.h>
#include<string.h>
struct Emp{
    int id;
    char name[10];
};
// int main(){
//     struct Emp e;//to make an instance
//     e.id=102;//to make value for id of e instance equal to 102
//     //e.name="Manu";//produces error as struct does not define string
//     strcpy(e.name,"Manu");
//     printf("EMP ID = %d\nEMP NAME = %s",e.id,e.name);
// }
// int main(){
//     struct Emp e;//to make an instance
//     e.id=102;//to make value for id of e instance equal to 102
//     //e.name="Manu";//produces error as struct does not define string
//     scanf("%s",&e.name);
//     printf("EMP ID = %d\nEMP NAME = %s",e.id,e.name);
// }
int main(){
    struct Emp e={102,"manu"};//to make an instance
    printf("EMP ID = %d\nEMP NAME = %s",e.id,e.name);
}