    #include<stdio.h>
    #include<math.h>
    int main(){
        int t;
        scanf("%d",&t);
        for(int i=0;i<t;i++){
            long long int n;
            scanf("%lli",&n);
            long long int x;
            double y;
            y=1+8*n;
            y=pow(y,0.5);
            x=(1+y)/2;
            printf("%lli\n",x);
        }
    }