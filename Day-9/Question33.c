#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of rows : ");
    scanf("%d",&numb);  // Entering number of rows

    //Loop for pattern printing
    for(int rw=numb; rw>0; rw--)
    {
        for(int clw=rw; clw>0; clw--)
        {
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}