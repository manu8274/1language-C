#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b){
            printf("First\n");
        }
        else if(a<b){
            printf("Second\n");
        }
        else{
            if((a+b+c)%2!=0){
                printf("First\n");
            }
            else{
                printf("Second\n");
            }
        }
    }
}
// int main(){
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         long long int x,y,z;
//         scanf("%lli %lli %lli",&x,&y,&z);
//         if(x==y && z%2!=0){
//             printf("First\n");
//         }
//         else if(x==y && z%2==0){
//             printf("Second\n");
//         }
//         else if(x>y){
//             if(x==(y+z)){
//                 printf("Second\n");
//             }
//             else if(x>(y+z)){
//                 printf("First\n");
//             }
//             else if(x<(y+z)){
//                 if(((y+z)-x)%2==0){
//                     printf("Second\n");
//                 }
//                 else if(((y+z)-x)%2!=0){
//                     printf("First\n");
//                 }
//             }
//         }
//         else if(x<y){
//             if(y==(x+z)){
//                 printf("Second\n");
//             }
//             else if(y>(x+z)){
//                 printf("Second\n");
//             }
//             else if(y<(x+z)){
//                 if(((x+z)-y)%2==0){
//                     printf("Second\n");
//                 }
//                 else{
//                     printf("First\n");
//                 }
//             }
//         }
//     }
// }
