#include<stdio.h>
int main()
{
    int numb;
    printf("Enter no. of rows : ");
    scanf("%d",&numb);  //Entering number of rows

    //Loop for pattern printing
    for(int row=1; row<=numb; row++)
    {
        for(int clm=1; clm<=row; clm++)
        {
            printf("%d ",row);
        }
        printf(" \n");
    }
    return 0;
}