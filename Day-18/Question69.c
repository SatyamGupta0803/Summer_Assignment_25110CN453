// Bubble Sort code

#include<stdio.h>
int main()
{
    int numb;
    printf("Enter size of array: ");
    scanf("%d",&numb);

    int arr[numb];

    //Entering element in array

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element of array: ",(i+1));
        scanf("%d",&arr[i]);
    }

    //Bubble Sort
    for(int i=0; i<numb-1; i++)
    {
        for(int j=0; j<numb-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Printing Sorted array

    printf("\nSorted Array: \n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}