//class of ip
#include<stdio.h>
int main(){
    int s;
    printf("enter:");
    scanf("%d",&s);
    if(s<=127 && s>0)   printf("Class A IP adress");
    else if(s<=191 && s>127)   printf("Class B IP adress");
    else if(s<=224 && s>191)   printf("Class C IP adress");
    else if(s<=239 && s>224)   printf("Class D IP adress");
    else if(s>=240)   printf("Class E IP adress");
}