#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int numb;
    printf("Enter number of terms : ");
    scanf("%d",&numb);  //Entering number of terms;

    printf("Fibonacci Series : \n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",fibonacci(i));
    }
    return 0;
}