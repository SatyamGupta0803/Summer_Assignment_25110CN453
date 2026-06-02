#include<stdio.h>
int main()
{
    int numb,revNumb =0;

    printf("Enter the number : ");
    scanf("%d",&numb);   // Entering the number;

    // Saving the number 
    int originalNumb = numb;

    // Reversing the number
    while(numb >0)
    {
        int rem = numb%10;
        revNumb = revNumb*10 + rem;
        numb /= 10;
    }
    printf("The reverse of %d is : %d",originalNumb,revNumb);

    //Palindrome Checking
    if(originalNumb == revNumb)
    printf("\n%d is a Palindrome Number", originalNumb);
    else
    printf("\n%d is not a Palindrome number",originalNumb);

    return 0;
}