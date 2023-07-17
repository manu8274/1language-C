/*to calculate owertime pay for 10 employee */
#include<stdio.h>
#include<math.h>
int main()
{
    float otpay;
    int hr,i=1;
    while (i<=10)
    {
        printf("\n enter no. of hours employee worked");
        scanf("%d", &hr);
        if (hr>=40)
        {
            otpay=(hr-40)*120;
        }
        else
        {
            otpay=0;
        }
        printf("\nhours =%d overtime pay=%f\n",hr,otpay);
        i+=1;
    }
    return 0;
}