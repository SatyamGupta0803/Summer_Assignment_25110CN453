#include<stdio.h>

int reverse = 0;
void reverseNumb(int n)
{
    if(n==0)
    return ;

    reverse = reverse*10 + (n%10);

    reverseNumb(n/10);
}

int main()
{
    int numb;
    printf("Enter the number to reverse : ");
    scanf("%d",&numb);

    //Reverse printing
    reverseNumb(numb);
    printf("Reversed Number = %d",reverse);
}