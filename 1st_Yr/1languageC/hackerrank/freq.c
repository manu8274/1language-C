#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0;
    scanf("%s",s); // for smal input
    gets(s); // for large input
    for(int i=0;i<strlen(s);i++){
        if  (s[i]=='0') a++;
        else if  (s[i]=='1') b++;
        else if  (s[i]=='2') c++;
        else if  (s[i]=='3') d++;
        else if  (s[i]=='4') e++;
        else if  (s[i]=='5') f++;
        else if  (s[i]=='6') g++;
        else if  (s[i]=='7') h++;
        else if  (s[i]=='8') j++;
        else if  (s[i]=='9') k++;
    } 
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,j,k);  
    return 0;
}
