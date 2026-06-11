#include<stdio.h>

int factorial(int n1)
{
    int fact =1;
    // factorial calculation
    if(n1==0 || n1==1)
    return 1;
    
    else
    {
        for(int i=1; i<=n1; i++)
        {
            fact = fact*i;
        }
        return fact;
    }
   
}

int main()
{
    int numb1;
    printf("Enter the number: ");
    scanf("%d",&numb1);

    //Function call
    int fact = factorial(numb1);
    printf("Factorial = %d",fact);

    return 0;
}