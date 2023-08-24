#include<stdio.h>
int gcd(int n1,int n2){
    if(n2!=0){
        return gcd(n2,n1%n2);
    }
    else{
        return n1;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int n,n2;
        scanf("%lli",&n);
        n2=n;
        long long int sum=0;
        while (n2!=0){
            sum=sum*10 +n2%10;
            n2=n2/10;
        }
        printf("%d",gcd(n,sum));
    }
}