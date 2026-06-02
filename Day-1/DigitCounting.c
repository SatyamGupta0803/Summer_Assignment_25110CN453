#include<stdio.h>
int main()
{
    int numb,count = 0;
    printf("Enter the number to Count the Digits : ");
    scanf("%d",&numb);
    // Loop for Digit Counting;
     while(numb!=0)
     {
        numb /=10;
        count++;
     }
     printf("The Number of Digits = %d",count);
        return 0;
}