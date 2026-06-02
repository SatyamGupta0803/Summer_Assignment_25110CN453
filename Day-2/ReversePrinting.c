#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);   // Entering the number

    // Reversing the number;
    int temp = numb;
    int revNumb=0;
    while(numb>0)
    {
        int rem = numb%10;
        revNumb = revNumb*10 + rem;
        numb /= 10;
    }
    printf("The original number = %d",temp);
    printf("\nThe Reversed number = %d",revNumb);
    return 0;
}