#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int y;
        scanf("%lli",&y);
        //n 2020 + m 2021 =y;
        long long int x=0;
        while (1){
            long long int z;
            z=y-x*2021;
            if(z%2020==0 && z>=0){
                printf("yes\n");
                break;
            }
            if(z<0){
                printf("no\n");
                break;
            }
            x++;
        }
    }
}