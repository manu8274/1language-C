#include<stdio.h>
#include<string.h>
// int main(){
//     int a;
//     printf("%d\n",sizeof(a));
//     char b;
//     printf("%d",sizeof(b));
// }

// struct std{
//     int a;
//     char b[];
// };

// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     printf("%d\n",sizeof(s1.a));
//     strcpy(s1.b,"man");
//     printf("%s",s1.b);
// }

// struct std{
//     int a;
//     char b[50];
//     float c;
// };

// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     printf("%d\n",sizeof(s1.a));
//     printf("%d\n",sizeof(s1.b));
//     printf("%d\n",sizeof(s1.c));
// }

// struct std{
//     int a:4;
//     // char b;
//     int c:4;
// };

// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     printf("%d\n",sizeof(s1.a));
//     printf("%d\n",sizeof(s1.b));
//     printf("%d\n",sizeof(s1.c));
// }

// packing memory :::::::::::::::::::::::::::::::::::::::::: to pack alllllllllll
// #pragma pack(1)

// struct std{
//     int a;
//     char b;
// };
// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     // printf("%d\n",sizeof(s1.a));
//     // printf("%d\n",sizeof(s1.b));
//     // printf("%d\n",sizeof(s1.c));
// }


// packing memory ::::::::::::::::::::::::::::::::::::::::::: to pack some 
// struct std{
//     int a;
//     char b;
// }__attribute__((packed));//packed
// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     // printf("%d\n",sizeof(s1.a));
//     // printf("%d\n",sizeof(s1.b));
//     // printf("%d\n",sizeof(s1.c));
// }

// struct std{
//     int a;
//     char b;
//     int c;
// }__attribute__((packed));//packed
// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     // printf("%d\n",sizeof(s1.a));
//     // printf("%d\n",sizeof(s1.b));
//     // printf("%d\n",sizeof(s1.c));
// }
// #pragma pack(1)
// struct std{
//     int a;
//     char b;
//     int c;
// }__attribute__((packed));//packed
// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     // printf("%d\n",sizeof(s1.a));
//     // printf("%d\n",sizeof(s1.b));
//     // printf("%d\n",sizeof(s1.c));
// }
// note pack always only pack by ending ie removes only ending mein spaces vale 
// struct std{
//     int a;
//     char b;
//     // int c;
// }__attribute__((packed,aligned(8)));//packed
// int main(){
//     struct std s1;
//     printf("%d\n",sizeof(s1));
//     // printf("%d\n",sizeof(s1.a));
//     // printf("%d\n",sizeof(s1.b));
//     // printf("%d\n",sizeof(s1.c));
// }
