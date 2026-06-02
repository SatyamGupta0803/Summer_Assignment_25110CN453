#include<stdio.h>
int main()
{
    int numb1;
    printf("Enter the Number to Find the Factorial : ");
    scanf("%d",&numb1);
    int fact = 1;
    // Loop for Factorial Calculation
    for(int i=1;i<=numb1;i++)
    {
        fact *=i;
    }
    printf("The Factorial of %d is : %d",numb1,fact);
    return 0;
}