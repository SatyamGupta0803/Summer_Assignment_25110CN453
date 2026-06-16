#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];

    //Entering elements in array
    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int temp = arr[numb-1];

    //Right Shifting

    for(int i=numb-1; i>=0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    //Printing the updated array

    printf("\nArray after shfiting:\n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}