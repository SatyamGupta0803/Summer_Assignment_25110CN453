#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int expectedSum = numb*(numb+1)/2;

    int actualSum =0;
    for(int i=0; i<numb-1; i++)
    {
        actualSum += arr[i];
    }

    printf("Missing number = %d",(expectedSum - actualSum));\

    return 0;
}