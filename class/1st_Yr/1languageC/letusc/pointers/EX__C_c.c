#include<stdio.h>
#include<math.h>

void area(float *a,float *b,float *c)
{
    float s;
    s=(*a+*b+*c)/2;
    float area;
    area=pow((s*(s-*a)*(s-*b)*(s-*c)),0.5);
    printf("area = %.1f",area);
}
void sides(int*x1,int*y1,int*x2,int*y2,int*x3,int*y3)
{
    float a,b,c;
    a=pow((pow((*x2-*x1),2) + pow((*y2-*y1),2)),0.5);
    b=pow((pow((*x3-*x2),2) + pow((*y3-*y2),2)),0.5);
    c=pow((pow((*x3-*x1),2) + pow((*y3-*y1),2)),0.5);

    area(&a,&b,&c);
}
void main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter th ecoordinates for (x1,y1) (x2,y2) (x3,y3):");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    //A(x1,y1),B(x2,y2),C(x3,y3)
    sides(&x1,&y1,&x2,&y2,&x3,&y3);
}