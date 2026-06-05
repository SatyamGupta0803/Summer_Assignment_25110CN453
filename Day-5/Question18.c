#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);  // Entering the number;

    //Strong number Checking
    int sum =0;
    int temp = numb;  

    while(numb>0)
    {
        int rem = numb%10;
        int fact =1;
        
        //Loop for factorial calculation
        while(rem>0)
        {
            fact *=rem;
            rem--;
        }

        sum += fact;
        numb/=10;
    }

    if(temp==sum)
    printf("%d is a Strong Number",temp); 

    else
    printf("%d is not a Strong Number",temp);
    
    return 0;
}