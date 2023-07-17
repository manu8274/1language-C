//alt digit sum
///eg 8796----6978 ----8-7+9-6
// print = 8 -7 +9 -6
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);

    int num=n;
    int rev=0;

    for(int i=n;i>0;i=i/10){
        int d=i%10;
        rev=rev*10+d;
    }
    int rev1=rev;
    double dc=0;
    float sum=0.0;
    for(int i=rev;i>0;i=i/10){
        int d=i%10;
        sum = sum + pow(-1.0,dc)*d;
        dc++;
    }
    printf("%.0f",sum);
}