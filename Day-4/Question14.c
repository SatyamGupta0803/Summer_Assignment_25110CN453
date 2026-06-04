#include<stdio.h>
int main()
{
    int numb;
    printf("Enter positon of Fibonacci term : ");
    scanf("%d",&numb);

    //Calculating nth Fibonacci term
    int firstNumb =0,secondNumb =1;
    for(int i=2;i<numb;i++)
    {
        int nextNumb = firstNumb + secondNumb;
        firstNumb = secondNumb;
        secondNumb = nextNumb;
    }
    printf("Fibonacci term at position %d = %d",numb,secondNumb);
    return 0;
}