// Voting eligibility system

#include<stdio.h>

int main()
{
    int age;
    printf("--Voting Eligibility System--");
    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age>=18)
    printf("You are eligibile to vote");

    else if(age>0)
    {
        printf("You can't vote");
        printf("You will be eligible to vote after %d year",(18-age));
    }

    else
    printf("Enter a valid age");

    return 0;
}