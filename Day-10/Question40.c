#include<stdio.h>
int main()
{
    int numb=5;

    //Loop for pattern printing
    for(int row=1; row<=numb; row++)
    {
        //Spaces
        for(int spc=numb-row; spc>0; spc--)
        {
            printf(" ");
        }
        //Characters
        for(int clm=1; clm<=row; clm++)
        {
            printf("%c",(64+clm));
        }

        for(int revClm=row-1; revClm>0; revClm--)
        {
            printf("%c",(revClm+64));
        }

          printf("\n");
    }
    return 0;
}