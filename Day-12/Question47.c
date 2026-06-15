#include<stdio.h>

void fibonacci(int n)
{
    int firstNumb =0,secondNumb=1;
    int nextNumb;

    printf("Fibonacci Series :\n");

    printf("%d\t",firstNumb);
    printf("%d\t",secondNumb);
    // loop for fibonacci series
    for(int i=2; i<n; i++)
    {
        nextNumb = firstNumb + secondNumb;
        firstNumb = secondNumb;
        secondNumb = nextNumb;

        printf("%d\t",nextNumb);
    } 

}

int main()
{
    int numb;
    printf("Enter number of terms: ");
    scanf("%d",&numb);

    //Function call;
    fibonacci(numb);

    return 0;
}