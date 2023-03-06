#include<stdio.h>
#include<math.h>
 
 int stats(int *sum,int *avg,double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("\nenter 5 number:");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5;
    *stdev=sqrt((pow((n1-*avg),2.0) + pow((n2-*avg),2.0) + pow((n3-*avg),2.0) + pow((n4-*avg),2.0) + pow((n5-*avg),2.0))/4);
}

int main()
{
    int sum,avg;
    double stdev;
    stats(&sum,&avg,&stdev);
    printf("sum=%d \naverage=%d \nstandard deviation=%lf\n",sum,avg,stdev);
    return 0;
}