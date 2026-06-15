#include<stdio.h>

void perfect(int n)
{
    int temp=n;

    //Factor calculating

    int sum =0;
    for(int i=1; i<=temp/2; i++)
    {
        if(temp%i==0)
        sum += i;
    }

    if(sum ==temp)
    printf("%d is a Perfect number",temp);

    else
    printf("%d is not a perfect number",temp);
}

int main()
{
    int numb;
    printf("Enter the number: ");
    scanf("%d",&numb);

    //Function Call
    perfect(numb);

    return 0;
}