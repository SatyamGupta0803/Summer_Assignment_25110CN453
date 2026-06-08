#include<stdio.h>
int main()
{
    int numb;
    printf("Enter Number of Rows of Pyramid : ");
    scanf("%d",&numb);

    //Loop for pattern printing
    for(int row=1; row<=numb; row++)
    {
        for(int clm=1; clm<=row; clm++)
        {
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}