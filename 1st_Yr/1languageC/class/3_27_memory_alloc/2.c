#include<stdio.h>
#include<stdlib.h>
int main()
{
    int index=0,i=0,ans,n,
        *marks;
        marks=(int *)malloc(sizeof(int));
        if(marks==NULL)
        {    printf("no memory allocation");}
        else{
                printf("memory allocated\n");
                printf("base address of marks=%pc\n",marks);
                do
                {
                    printf("enter marks:");
                    scanf("%d",&marks[index]);
                    printf("would you likr add more(1/0):");
                    scanf("%d",&ans);
                    
                    if (ans==1)
                    {
                        index++;
                        marks=(int *)realloc(marks,(index+1)*sizeof(int));
                        if(marks==NULL){    printf("no memory allocation");}
                        else
                        {
                            printf("memory allocated sing realloc.\n");
                            printf("base address of marks=%pc\n",marks);
                        }
                    }
                    
                } while (ans==1);
                for (i = 0; i <= index; i++)
                {
                    printf("marks of students %d are: %d\n", i,
                    marks[i]);
                }
                free(marks);
            }
    return 0;
}