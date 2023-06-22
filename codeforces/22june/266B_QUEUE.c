#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    char z[x];
    scanf("%s",&z);
    int c=0;
    while(c<y){
        for(int i=0;i<x-1;i++)
        {
            if(z[i]=='B' && z[i+1]=='G')
            {
                z[i]='G';
                z[i+1]='B';
                c++;
            }
        }
    }
    printf("%s",z);
}