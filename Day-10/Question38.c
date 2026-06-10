#include<stdio.h>
int main()
{
    int numb=5;

    //Loop for pattern printing
    for(int row=1; row<=numb; row++)
    {
        //Spaces
        for(int spc=0; spc<row-1; spc++)
        {
            printf(" ");
        }

        //Stars
        for(int clm=10-(2*row-1); clm>0; clm--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}