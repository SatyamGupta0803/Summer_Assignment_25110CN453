#include<stdio.h>

void prime(int n1)
{
    int count=0;

    //Loop to check prime;
    for(int i=1; i<=n1/2; i++)
    {
        if(n1%i==0)
        count++;
    }
    if(count==1)
    printf("%d is a prime number",n1);

    else
    printf("%d is not a prime number",n1);

}

int main()
{
    int numb1;
    printf("Enter the Number: ");
    scanf("%d",&numb1);

    //Function call;
     prime(numb1);

     return 0;
    
}