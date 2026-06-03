#include<stdio.h>
int main()
{
    int numb1,numb2;
    //Entering the numbers
    printf("Enter First Number : ");
    scanf("%d",&numb1);
    printf("Enter Second Number : ");
    scanf("%d",&numb2);

    //LCM calculation;
    int x = numb1;
    int y = numb2;
    while(y!=0)
    {
        int temp = y;
        y = x%y;
        x = temp;
    }
    int gcd = x;
    int LCM = (numb1*numb2)/gcd;
    printf("LCM = %d",LCM);
    return 0;
}