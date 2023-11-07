#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//to find the max and , or , xor in the range 1 to n and less than k
void calculate_the_maximum(int n, int k) {
    int and=0,or=0,xor=0;
    int x,y,z;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            x= i & j;
            y= i | j;
            z= i ^ j;
            if ((x<k)&& (x>=and))   and=x;
            if ((y<k)&& (y>=or))   or=y;
            if ((z<k)&& (z>=xor))   xor=z;
        }
    }
    printf("%d\n",and);
    printf("%d\n",or);
    printf("%d\n",xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}