#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int odd,even,n;
        odd=0;
        even=0;
        scanf("%d",&n);
        char arr[2*n];
        for(int j=0;j<2*n;j++){
            scanf("%d",&arr[i]);
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}