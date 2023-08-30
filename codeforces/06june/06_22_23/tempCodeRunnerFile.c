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
        for(int i=1;i<x;i++)
        {
            if(z[i]=='G' && z[i-1]=='B')
            {
                z[i]='B';
                z[i-1]='G';
                i++;
                c++;
            }
        }
    }
    printf("%s",z);
}