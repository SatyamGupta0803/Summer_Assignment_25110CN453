#include<stdio.h>

    int factorial(int n)
    {
        if(n==0 || n==1)
        return 1;

        else
        return n* factorial(n-1);
    }

    int main()
    {
        int numb;
        printf("Enter the number for factorial: ");
        scanf("%d",&numb);

        // Factorial by recursion method;
        printf("Factorial = %d",factorial(numb));
        return 0;
    }
