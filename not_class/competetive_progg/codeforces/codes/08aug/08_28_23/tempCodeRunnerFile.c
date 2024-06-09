#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        for(int j=1;j<=n;j++){
            for (int k=1;k<=m;k++){
                if(n%2!=0 && (j==1 || j==n)){
                    if(k%2!=0){
                        printf("%d",1);
                    }
                    else{
                        printf("%d",0);
                    }
                }
                else if(n%2!=0 && j!=1 && j%2!=0){
                    if(k==1 || k==m){
                        printf("%d",1);
                    }
                    else{
                        printf("%d",0);
                    }
                }
                else if(n%2!=0 && j%2==0 && j!=n){
                    printf("%d",0);
                }
                else if(n%2==0 && j==1){
                    if(k%2!=0){
                        printf("%d",1);
                    }
                    else{
                        printf("%d",0);
                    }
                }
                else if(n%2==0 && j==n){
                    if(m<=4){
                        printf("%d",0);
                    }
                    else{
                        if(k%2!=0 && k!=1 && k<m-1 ){
                            printf("%d",1);
                        }
                        else{
                            printf("%d",0);
                        }
                    }
                }
                else if (n%2==0 && j%2!=0 && (j!=1 && j!=n)){
                    if(k==1 || k==m){
                        printf("%d",1);
                    }
                    else{
                        printf("%d",0);
                    }
                }
                else if(n%2==0 && j%2==0 && j!=n){
                    printf("%d",0);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}