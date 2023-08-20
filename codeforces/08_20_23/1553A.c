#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int n,p;
        scanf("%lli",&n);
        if(n<9){
            p=0;
        }
        else{
            p=n/10;
        }
        if(n%10==9){
            p++;
        }
        printf("%d\n",p);
    }
}