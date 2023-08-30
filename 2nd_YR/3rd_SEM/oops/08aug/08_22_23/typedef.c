//typedef to give alias name only used on variable for main
// #include<stdio.h>
// #include<string.h>

// struct address{
//     char adre[100];
// };
// struct Emp
// {
//     int id;
//     typedef int i;//using typedef to make int alias as i
//     i x;
//     char name[100];
//     struct address add;
// };

// int main(){
//     struct Emp e;
//     scanf("%d %s",&e.id,e.name);
//     strcpy(e.add.adre,"Panipat");
//     e.x=80000;
//     printf("EMP ID = %d\n",e.id);
//     printf("EMP NAME = %s\n",e.name);
//     printf("EMP ADD = %s\n",e.add.adre);
//     printf("EMP SAL = %s\n",e.x);
// }

#include<stdio.h>
#include<string.h>
typedef char j;

typedef struct address{
    char adre[100];
}a;//a is the alias name for address
struct Emp
{
    j id[10];
    j name[100];
    j sal;
    a add;
};

int main(){
    typedef int i;//using typedef to make int alias as i
    i x=10;
    struct Emp e;
    scanf("%d %s",&e.id,e.name);
    strcpy(e.add.adre,"Panipat");
    e.x=80000;
    printf("EMP ID = %d\n",e.id);
    printf("EMP NAME = %s\n",e.name);
    printf("EMP ADD = %s\n",e.add.adre);
    printf("EMP SAL = %s\n",e.x);
}
//to make an another loop with multiple structure 
// int main(){
//     char arr[5][3];
//     for (int i=0;i<5;i++){
//         struct Emp (a);
//         printf("emp id=");
//         scanf("%s",(a).id);
//         printf("emp name=");
//         scanf("%s",(a).name);
//         printf("emp add =");
//         scanf("%s",(a).add.adre);
//         int k=0;
//         arr[i][k]=a.id;
//         k++;
//         arr[i][k]=a.name;
//         k++;
//         arr[i][k]=a.add.adre;
//     }
//     for (int i=0;i<5;i++){
//         for(int k=0;k<3;k++){
//             printf("%s",&arr[i][k]);
//         }
//         printf("\n");
//     }
// }