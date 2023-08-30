#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("enter the name of file to created:");
    scanf("%s",&name);
    FILE* ptr;
    ptr=fopen(name,"w");
    fclose(ptr);
    while(1){
        printf("\npls provide the mode to be used(to quit use ctrl+d):");
        char m;
        scanf("%c",&m);

        if(m=='r'){
            ptr=fopen(name,"r");
            printf("how many character you want to read?");
            int n;
            scanf("%d",&n);

            char arr[n];

            for(int i=0;i<n;i++){
                printf("%c",fgetc(ptr));
            }
            fclose(ptr);
        }

        else if(m=='w'){
            ptr=fopen(name,"w");
            printf("enter the length of string.");
            int n;
            scanf("%d",&n);
            getchar();
            printf("enter any string:");
            char arr[n];
            // scanf("%[^\n]%*c",arr);
            // fgets(arr,n,stdin);
            // scanf("%s",arr);
            gets(arr);
            for (int i=0;i<n;i++){
                putc(arr[i],ptr);
            }
            fclose(ptr);
        }

        else if(m=='a'){
            ptr=fopen(name,"a");
            printf("enter the length of string.");
            int n;
            scanf("%d",&n);
            printf("enter any string:");
            char arr[n];
            // scanf("%[^\n]%*c",arr);
            // fgets(arr,n,stdin);
            scanf("%s",arr);
            for (int i=0;i<n;i++){
                putc(arr[i],ptr);
            }
            fclose(ptr);
        }

        else if(m==4) {
            //to use ctrl+D to exit ;
            return 0;
        }
    }
}