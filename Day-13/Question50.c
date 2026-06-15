#include<stdio.h>

int main()
{
    int numb;
    printf("Enter number of terms: ");
    scanf("%d",&numb);

    int arr[numb];
    //loop to enter the elements of array

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element of array: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int sum=0;

    //Sum Calculation;
    for(int i=0; i<numb; i++)
    {
        sum += arr[i];
    }

    float average =0;
    average = (float)sum/numb;

    printf("Sum of array: %d\n",sum);
    printf("Average : %.2f",average);

    return 0;
}