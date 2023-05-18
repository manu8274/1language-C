#include<stdio.h>
int main()
{
	int n;
	int rev=0;
    scanf("%d",&n);
	while(n>0){
		int d=n%10;
		n=n/10;
		rev=rev*10 + d;
	}
	printf("%d",rev);
}