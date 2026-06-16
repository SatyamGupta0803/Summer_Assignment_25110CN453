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

    int index =0;

    //Moving all non-zero element front
    for(int i=0; i<numb; i++)
    {
        if(arr[i]!=0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    //Positioning zeros at the end
    while(index<numb)
    {
        arr[index] =0;
        index++;
    }

    //Printing the updated array

    printf("\nArray after zeros shift to last:\n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}