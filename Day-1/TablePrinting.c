#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number required for Table : ");
    scanf("%d",&numb);
    printf("The Table of %d is : \n",numb);

    // Loop for Table Printing
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",numb,i,numb*i);
    }
    return 0;
}