#include<stdio.h>
int main()
{
    int numb1;
    printf("Enter the number till which Sum is required : ");
    scanf("%d",&numb1);
    int sum = 0;
    for(int i=1;i<=numb1;i++)
    {
        sum +=i;
    }
    printf("The sum of first %d natural number is : %d",numb1,sum);
    return 0;
}