#include<stdio.h>
#include<string.h>

struct mystruct
{
    int num;
    char letter;
    char mystr[20];
};

int main(){
    struct mystruct s1;
    s1.num=5;
    s1.letter='m';
    strcpy(s1.mystr, "hello");
    printf("%d\t",s1.num);
    printf("%c\t",s1.letter);
    printf("%s",s1.mystr);
}
