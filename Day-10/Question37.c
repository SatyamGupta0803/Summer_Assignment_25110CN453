#include<stdio.h>
int main()
{
    int numb =5;

    //Loop to print the pattern
    for(int row=1; row<=5; row++)
    {
        //Space printing
        for(int spc=numb-row; spc>=0; spc--)
        {
            printf(" ");
        }

        //Star printing;
        for(int clm=1; clm<=2*row-1; clm++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;

}