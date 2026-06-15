#include<stdio.h>

void palindrome(int n)
{
    int temp = n, revNumb=0;

    //Reverse the number
    while(n>0)
    {
        int rem = n%10;
        revNumb = revNumb*10 + rem;
        n /= 10;
    }
    if(revNumb==temp)
    printf("%d is a Palindrome Number",temp);

    else
    printf("%d is not a Palindrome Number",temp);
}

int main()
{
    int numb;
    printf("Enter the number: ");
    scanf("%d",&numb);

    //Function call
    palindrome(numb); 

    return 0;
}