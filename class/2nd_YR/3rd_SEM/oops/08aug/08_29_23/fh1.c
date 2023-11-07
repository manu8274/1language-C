#include<stdio.h>
#include<string.h>

// int main(){
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","w");
    // if (fptr != NULL){
    //     printf("file opened succesfully");
    // }
    // else{
    //     printf("")
    // }
// }
// int main(){
//     printf("enter any string:");
//     char st[50];
//     scanf("%s",st);
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","w");
//     for (int i=0;i<strlen(st);i++){
//         putc(st[i],fptr);
//     }
//     fclose(fptr);
// }
int main(){
    printf("enter any string:");
    char st[50];
    gets(st);
    FILE* fptr;
    fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","w");
    for (int i=0;i<strlen(st);i++){
        putc(st[i],fptr);
    }
    fclose(fptr);
}
// int main(){
//     printf("enter any string:");
//     char st[50];
//     gets(st);//if use in recursive or buffer overflow then it does not work untill getchar uses.
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","a");
//     for (int i=0;i<strlen(st);i++){
//         putc(st[i],fptr);
//     }
//     fclose(fptr);
// }
// int main(){
//     printf("enter any string:");
//     char st[50];
//     scanf("%[^\n]s",st);//to use white spaces
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","a");
//     for (int i=0;i<strlen(st);i++){
//         putc(st[i],fptr);
//     }
//     fclose(fptr);
// }
// int main(){
//     // printf("enter any string:");
//     // char st[50];
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\manu1\\Desktop\\man.txt","r");
//     for (int i=0;i<10;i++){
//         printf("%c",fgetc(fptr));
//     }
//     fclose(fptr);
// }