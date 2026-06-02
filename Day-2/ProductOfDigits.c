#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb); // Input of the Number

    //Loop to calculate Product of Digits
    int product =1;
    int temp = numb;
    while(numb>0)
    {
        int rem = numb%10;
        product *= rem;
        numb /= 10;
    } 
    printf("The Entered Number = %d",temp);
    printf("\nProduct of Digits = %d",product);
    return 0 ;
}