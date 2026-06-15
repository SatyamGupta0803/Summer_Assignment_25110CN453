#include<stdio.h>
#include<math.h>

void armstrong(int n)
{
    int temp=n,count=0;

    //Digit counting
    while(temp>0)
    {
        count++;
        temp /= 10;
    }

    //Armstrong checking;
    int sum =0;
    int numb1= n;
    while(numb1>0)
    {
        int rem = numb1%10;
        sum += pow(rem,count);
        numb1 /=10;
    }

    if(sum==n)
    printf("%d is a Armstrong Number",n);

    else
    printf("%d is not a Armstrong Number",n);
}

int main()
{
    int numb;
    printf("Enter the number: ");
    scanf("%d",&numb);

    //Function call
    armstrong(numb);

    return 0;
}    