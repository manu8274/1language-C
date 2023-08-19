#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        long long int n,s,c=0;
        scanf("%lli",&n);
        for(int j=1;j<=9;j++){
            s=j;
            while(s<=n){
                c++;
                s=s*10 + i;
            }
        }
        printf("%d\n",c);
    }
}
