#include<stdio.h>

/*int main()
{
    int num=8;
    int *ptr=&num;
    printf("%d\n",num);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

    *ptr=20;
    printf("%d\n",num);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
}
//null pointer
int main()
{
    int *ptr=NULL;
    printf("1-%d\n",ptr);
    printf("2-%d",*ptr);
}
//void pointer
int main()
{
    int mun=19;
    char b='a';
    float f=3.5;
    void *ptr;
    ptr=&mun;
    printf("%d\n",*(int*)ptr);
    printf("%d\n",(int*)ptr);
    ptr=&b;
    printf("%c\n",*(char*)ptr);
    printf("%d\n",(char*)ptr);
    ptr=&f;
    printf("typr casting=%f\n",*(float*)ptr);
    printf("typr casting=%d\n",(float*)ptr);
}*/

//wild pointer-unintialised pointer

int main()
{
    int*p;
    printf("%d",*p);
}