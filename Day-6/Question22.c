#include<stdio.h>
#include<math.h>
int main()
{
    long long numb;
    printf("Enter the binary digits : ");
    scanf("%lld",&numb);

    //Conversion of binary to decimal;
    int i=0,decimal=0;

    while(numb>0)
    {
        int rem = numb%10;
        decimal += rem*pow(2,i);
        numb/=10;
        i++;
    }
    printf("Decimal of given number = %d",decimal);
    return 0;
}