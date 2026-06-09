#include<stdio.h>
int main()
{
    int numb =5;
    //Loop for pattern printing;
    for(int rw=1; rw<=5; rw++)
    {
        for(int clm=1; clm<=5; clm++ )
        {
            if(rw==1 || rw==numb || clm==1 || clm==numb)
            printf("*");

            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}