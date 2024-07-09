#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    scanf("%d",&m);
    int a2[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }

    int a3[m+n];
    int j=0;
    for(int i=0;i<n;i++){
        a3[j]=a1[i];
        j++;
    }
    for(int i=0;i<m;i++){
        a3[j]=a2[i];
        j++;
    }
    printf("before sorting\n");
    for(int i=0;i<m+n;i++){
        printf("%d ",a3[i]);
    }
    for(int i=0;i<m+n;i++){
        for(int k=i;k<m+n;k++){
            if(a3[i]>a3[k]){
                int t=a3[k];
                a3[k]=a3[i];
                a3[i]=t;
            }
        }
    }
    printf("\nafter sorting\n");
    for(int i=0;i<m+n;i++){
        printf("%d ",a3[i]);
    }
}