#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);   //Entering the number;

    //Set bit counting
    int count =0;
    while(numb>0)
    {
        if(numb%2==1)
        count++;

        numb /=2;
    }
    printf("Set bits = %d",count);
}