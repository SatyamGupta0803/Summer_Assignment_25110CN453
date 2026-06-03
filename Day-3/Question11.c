#include<stdio.h>
int main()
{
    int numb1,numb2;
    //Entering numbers 
    printf("Enter First number : ");
    scanf("%d",&numb1);
    printf("Enter Second number : ");
    scanf("%d",&numb2);

    //GCD Calculation;
    while(numb2!=0)
    {
        int temp = numb2;
        numb2 = numb1 % numb2;
        numb1 = temp;
    }
    printf("GCD : %d",numb1);
    return 0;
}