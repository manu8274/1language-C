#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int m,n,rr,rc,dr,dc;
        scanf("%d %d %d %d %d %d",&n,&m,&rr,&rc,&dr,&dc);
        if(rr==dr || rc==dc){
            printf("%d\n",0);
        }
        else if(rc<dc && rr>dr){
            printf("%d\n",dc-rc);
        }
        else if(rr<dr && rc>dc){
            printf("%d\n",dr-rr);
        }
        else if(rc<dc && rr<dr){
            if((dc-rc)<(dr-rr)){
                printf("%d\n",dc-rc);
            }
            else{
                printf("%d\n",dr-rr);
            }
        }
        else if(rr>dr && rc>dc){
            // int z;
            // if((n-rr) > (m-rc)){
            //     z=n-rr;
            // }
            // else if((n-rr) < (m-rc)){
            //     z=m-rc;
            // }
            // else{
            //     z=(n-rr) + (m-rc);
            // }
            int a=2*n-(rr+dr),b=2*m-(rc+dc);
            if(a<b){
                printf("%d\n",a);
            }
            else{
                printf("%d\n",b);
            }
        }
    }
}
