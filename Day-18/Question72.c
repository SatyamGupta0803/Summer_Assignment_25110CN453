#include<stdio.h>
int main()
{
    int numb;
    printf("Enter size of array: ");
    scanf("%d",&numb);

    int arr[numb];

    //Entering element 

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    //Array Sorting in Descending order

    for(int i=0; i<numb-1; i++)
    {
        for(int j=i+1; j<numb; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array in Descending Order:\n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}