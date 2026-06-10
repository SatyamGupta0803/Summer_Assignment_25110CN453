#include<stdio.h>
int main()
{
    int numb=5;

    //Loop for pattern printing;
    for(int row=1; row<=numb; row++)
    {
        //Spaces
        for(int spc=0; spc<=numb-row; spc++)
        {
            printf(" ");
        }

        //Numbers
        for(int clm=1; clm<=row; clm++)
        {
            printf("%d",clm);
        }

        for(int revNumb=row-1; revNumb>0; revNumb--)
            {
                printf("%d",revNumb);
            }
        printf("\n");
    }
    return 0;
}