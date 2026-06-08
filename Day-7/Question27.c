#include<stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;

   return n%10 + sum(n/10);
}

int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);     //Entering the number;

    printf("Sum of digits = %d",sum(numb));

    return 0;
}