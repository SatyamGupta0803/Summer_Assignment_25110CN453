#include<stdio.h>
int main()
{
    int numb;
    //Entering number of terms;
    printf("Enter number of terms : ");
    scanf("%d",&numb);   

    //Printing fibbonacci Series;
    int firstNumb =0,secondNumb =1;
    printf("Fibonacci Series : %d\t%d\t",firstNumb,secondNumb);
    for(int i=2;i<=numb;i++)
    {
        int nextNumb = firstNumb+secondNumb;
        firstNumb = secondNumb;
        secondNumb = nextNumb;
        printf("%d\t",nextNumb);
    }
}