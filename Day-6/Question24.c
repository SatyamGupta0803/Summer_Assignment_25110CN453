#include<stdio.h>
int main()
{
    int numb,pow;
    printf("Enter the Base Number: ");
    scanf("%d",&numb);  //Entering the base number;

    printf("Enter the power term: ");
    scanf("%d",&pow);  //Entering the power term;

    //Using loop to calculate the pow(numb,power);
    int power =1;
    for(int i=1; i<=pow; i++)
    {
        power = power*numb;
    }
    printf("%d^%d = %d",numb,pow,power);
    return 0;
}