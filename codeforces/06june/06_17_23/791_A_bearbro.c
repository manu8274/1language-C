#include<stdio.h>
int main(){
    int x,y,c=0;
    scanf("%d %d",&x,&y);
    while (x<y+1)
    {
        x=x*3;
        y=y*2;
        c++;
    }
    printf("%d",c);    
}