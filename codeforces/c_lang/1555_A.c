// #include<stdio.h>
// #include<math.h>
// int main(){
//     long int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         long int n;
//         scanf("%d",&n);
//         long int s=0,m=0,l=0;//no of pizza in else case
//         long int large=0,medium=0,small=0;// no puzza in 0 case
//         long int st=15,mt=20,lt=25; //time for pizza
//         long int tt=0;
//         if(n<6){
//             tt=15;
//         }
//         if(n<6){
//             tt=15;
//         }
//         else
//         {
//             if(n%6==0){
//                 small=n/6;
//             }
//             else if(n%8==0){
//                 medium=n/8;
//             }
//             else if(n%10==0){
//                 large=n/10;
//             }
//             else{
//                 if(n%10>8){
//                     l=n/10;
//                     l++;
//                 }
//                 else if(n%10==8){
//                     l=n/10;
//                     m++;
//                 }
//                 else if(n%10<=6){
//                     l=n/10;
//                     s++;
//                 }
//                 else if(n%8>6){
//                     m=(n/8)+1;
//                 }
//                 else if(n%8<=6){
//                     m=(n/8);
//                     s++;
//                 }
//                 else if(n%6>0){
//                     s=(n/6)+1;
//                 }
//             }
//             tt=small*15 +medium*20 +large*25 +s*15 +m*20 +l*25;
//         }
//         printf("%d",tt);
//     }
// }
#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int n;
        long long int tt;
        scanf("%lli",&n);
        if(n<=6){
            tt=15;
        }
        else if(n%2==0){
                tt=n*2.5;
            }
        else{
                tt=(n+1)*2.5;
            }
        printf("%lli\n",tt);
    }
}