#include<stdio.h>
#include<string.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int w=0;
    for (int i = 0; i < x; i++)
    {
        int d;
        scanf("%d",&d);
        if(d>y) w+=2;
        else    w++;
    }
    printf("%d",w);
    
}