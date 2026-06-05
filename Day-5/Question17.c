#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);    //Entering the number;

    //Checking perfect number;
    int sum =0;
    for(int i=1;i<=numb/2;i++)
    {
        if(numb%i==0)
        sum += i;
    }
    if(numb == sum)
    printf("%d is Perfect Number",numb);
    else
    printf("%d is not a Perfect Number",numb);
    return 0;
}