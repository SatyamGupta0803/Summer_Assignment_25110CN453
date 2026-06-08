#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of rows : ");
    scanf("%d",&numb); //Entering number of rows;

    //Loop for pattern printing
    for(int row=1; row<=numb; row++)
    {
        for(int clm=1; clm<=row; clm++)
        {
            printf("%d ",clm);
        }
        printf(" \n");
    }
    return 0;
}