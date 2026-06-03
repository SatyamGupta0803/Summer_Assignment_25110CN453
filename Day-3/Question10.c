#include<stdio.h>
int main()
{
    int strt,end;
    //Entering the Range
    printf("Enter the Starting Range : ");
    scanf("%d",&strt);
    printf("Enter the Last Range: ");
    scanf("%d",&end);

    //Printing the Numbers in Range;
    printf("Prime Numbers in given Range : ");
    for(int i=strt;i<=end;i++)
    {
        int isPrime =1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                 isPrime = 0;
                  break;
            }
        }
        if(isPrime==1)
        printf("%d\t",i);
    }
    return 0;
}