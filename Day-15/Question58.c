#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];

    //Entering element in array

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int temp = arr[0];

    //Left Shifting;

    for(int i=0; i<numb; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[numb-1] = temp;    //Putting first element to last

    //Printing the updated array

    printf("\nArray after Shifting: \n");

    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}