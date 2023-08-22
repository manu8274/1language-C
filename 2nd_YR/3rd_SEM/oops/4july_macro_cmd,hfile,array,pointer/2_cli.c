#include<stdio.h>
// int main(int argc,int *argv[]){
//     int i;
//     printf("program name is %s",argv[0]);
//     if(argc<2){
//         printf("\nno argument passed");
//     }
//     else{
//         printf("\narg passed");
//     }
//     for(i=1;i<argc;i++){
//         printf("\t%s",argv[i]);
//     }
// }
int x=10;
void fun(){
    int x=2;
    fun2();
}
void fun2(){
    printf("%d",x);
}
int main(){
    int x=1;
    fun();
}