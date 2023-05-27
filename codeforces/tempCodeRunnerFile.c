#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long n;
        scanf("%d",&n);
        if(n%2==0){
            n=n*2.5;
        }
        else{
            n=(n+1)*2.5;
        }
        if(n==0){
            n=15;
        }
        printf("%d\n",n);
    }
}