#include<stdio.h>

void max(int n1,int n2)
{
    if(n1>n2)
    printf("%d is largest",n1);
    else
    printf("%d is largset",n2);
}

int main()
{
    int numb1,numb2;
    printf("Enter 1st number: ");
    scanf("%d",&numb1);
    printf("Enter 2nd number: ");
    scanf("%d",&numb2);

    //Function call
    max(numb1,numb2);

    return 0;
}