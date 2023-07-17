#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("\nEnter cp and sp:");
    scanf("%f %f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
      printf("seler made profit of Rs:%f\n",p);
    if(l>0)
      printf("seler made loss of Rs:%f\n",l);
    if(p==0)
      printf("no loss no gain\n");
    return 0;   
}