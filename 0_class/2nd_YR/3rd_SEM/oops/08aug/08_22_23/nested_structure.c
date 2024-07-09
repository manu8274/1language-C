//structure inside a structure or variable of another structure in another structure no limitation on nesting
#include<stdio.h>
#include<string.h>

struct address{
    char adre[100];
};
struct Emp
{
    int id;
    char name[100];
    struct address add;
};

int main(){
    struct Emp e;
    scanf("%d %s",&e.id,e.name);
    strcpy(e.add.adre,"Panipat");
    printf("EMP ID = %d\n",e.id);
    printf("EMP NAME = %s\n",e.name);
    printf("EMP ADD = %s\n",e.add.adre);
}