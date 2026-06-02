#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);

    //Loop for Sum Calculation;
    int sum =0;
    while(numb>0)
    {
        int rem = numb%10;
        sum += rem;
        numb /= 10;
    }
    printf("The Sum of digits = %d",sum);
    return 0;
}
