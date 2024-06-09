#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int xa,xb,xf,ya,yb,yf;
        scanf("%d %d",&xa,&ya);
        scanf("%d %d",&xb,&yb);
        scanf("%d %d",&xf,&yf);
        
        if(xa==xb&& xb==xf){
            if((ya>yf && yf>yb)){
                printf("%d\n",ya-yb+2); 
            }
            else if((yb>yf && yf>ya)){
                printf("%d\n",yb-ya+2);
            }
            else{
                if(yb>ya){
                    printf("%d\n",yb-ya);
                }
                else{
                    printf("%d\n",ya-yb);
                }
            }
        }
        else if(ya==yb && yb==yf){
            if((xb<xf && xf<xa)){
                printf("%d\n",xa-xb+2);
            }
            else if((xa<xf && xf<xb)){
                printf("%d\n",xb-xa+2);
            }
            else{
                if(xb>xa){
                    printf("%d\n",xb-xa);
                }
                else{
                    printf("%d\n",xa-xb);
                }
            }
        }
        else{
            if(yb>ya){
                if(xa>xb){
                    printf("%d\n",xa-xb+yb-ya);
                }
                else{
                    printf("%d\n",xb-xa+yb-ya);
                }
            }
            else{
                if(xa>xb){
                    printf("%d\n",xa-xb+ya-yb);
                }
                else{
                    printf("%d\n",xb-xa+ya-yb);
                }
            }
        }
    }
}