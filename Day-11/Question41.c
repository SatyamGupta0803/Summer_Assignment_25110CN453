#include<stdio.h>

void sum(int numb1,int numb2)
{
    int sum = numb1+numb2;
    printf("Sum = %d",sum);
}

int main()
{
    int n1,n2;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);

    //Function call
     sum(n1,n2);

    return 0;
}