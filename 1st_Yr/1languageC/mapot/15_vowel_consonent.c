#include<stdio.h>
#include<string.h>

int main(){
    char ch[1000];
    gets(ch);
    int l;
    l=strlen(ch);
    int v=0,c=0;
    for(int i=0;i<l;i++){
        if ((ch[i]==('a'))||(ch[i]==('e'))||(ch[i]==('i'))||(ch[i]==('o'))||(ch[i]==('u'))||(ch[i]==('A'))||(ch[i]==('E'))||(ch[i]==('I'))||(ch[i]==('O'))||(ch[i]==('U'))){
            v++;
        }
        else if(ch[i]!=' '){
            c++;
        }
    }
    printf("vowel=%d\nconsonant=%d",v,c);
}