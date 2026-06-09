#include<stdio.h>
int main()
{
    int numb =5;
    
    //Loop for pattern printing
    for(int rw=1; rw<=numb; rw++)
    {
        for(int clw=1; clw<=6-rw; clw++)
        {
            printf("%d",clw);
        }
        printf(" \n");
    }
    return 0;
}