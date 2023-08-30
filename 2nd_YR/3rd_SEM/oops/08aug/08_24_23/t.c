#include<stdio.h>
// struct book{
//     char title[20];
//     int year;
// };
// int main(){
//     struct book book1={"alice",20};
//     struct book book2=book1;
//     printf("%s %d",book2.title,book2.year);
// }

struct point{
    int x,y;
};
void modify(struct point p){
    p.x=10;
    p.y=20;
}
int main(){
    struct point p={5,6};
    modify(p);
    printf("%d %d",p.x,p.y);
}