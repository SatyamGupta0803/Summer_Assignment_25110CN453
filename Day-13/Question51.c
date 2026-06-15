#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of terms: ");
    scanf("%d",&numb);

    int arr[numb];

    //loop to enter elements

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    //Loop to calculate maxElement
    for(int i=1; i<numb; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    //loop to find minima

       int min = arr[0];

     for(int i=1; i<numb; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }

        printf("Max: %d\n",max);
        printf("Min: %d",min);
        
        return 0;
}