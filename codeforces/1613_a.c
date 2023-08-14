// #include<stdio.h>
// #include<math.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         long long int x1,x2;
//         float p1,p2;
//         scanf("%lli %f",&x1,&p1);
//         scanf("%lli %f",&x2,&p2);
//         double z1,z2;
//         if(p1>p2){
//             p1=p1-p2;
//             p2=0;
//         }
//         else{
//             p2=p2-p1;
//             p1=0;
//         }
//         z1=x1*(pow(10,p1));
//         z2=x2*(pow(10,p2));
//         if(z1>z2){
//             printf(">");
//         }
//         else if(z1==z2){
//             printf("=");
//         }
//         else{
//             printf("<");
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x1,x2;
        float p1,p2;
        scanf("%d %f",&x1,&p1);
        scanf("%d %f",&x2,&p2);
        if(x1==x2){
            if(p1==p2){
                print("=\n");
            }
            else if(p1>p2){
                printf(">\n");
            }
            else{
                printf("<\n");
            }
        }
        if(x1>x2){
            
        }
    }
}