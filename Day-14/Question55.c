#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of Element: ");
    scanf("%d",&numb);

    int arr[numb];

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int largest=arr[0],secondLargest=arr[0];

    for(int i=1; i<numb; i++)
    {
        if(arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(secondLargest<arr[i] && arr[i] != largest)
        secondLargest = arr[i];
    }

    printf("Second Largest Element : %d",secondLargest);

    return 0;
}