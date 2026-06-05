#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);  //Entering the number;

    //Factor Calculation;
    printf("Factors of %d are:\n",numb);
    for(int fact=1; fact<=numb/2; fact++)
    {
        if(numb%fact ==0)
        printf("%d\t",fact);
    }
    printf("%d",numb);  //Every number is a Factor of itself;
    return 0;
}