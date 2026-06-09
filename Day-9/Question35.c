#include<stdio.h>
int main()
{
    int numb =5;
    //Loop for Pattern printing;
    for(int rw=1; rw<=numb; rw++)
    {
        for(int clw=1; clw<=rw; clw++)
        {
            printf("%c ",(64+rw));
        }
        printf(" \n");
    }
    return 0;
}