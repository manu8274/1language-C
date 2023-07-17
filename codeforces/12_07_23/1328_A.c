#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int x;
        x=a%b;
        if(x==0){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",b-x);
        }
    }
    
}