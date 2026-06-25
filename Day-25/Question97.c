//Merge two sorted array

#include<stdio.h>

int main()
{
    //Detailing of array1;
    int n1;
    printf("Enter no. of elements in array1: ");
    scanf("%d",&n1);

    int arr1[n1];
    for(int i=0; i<n1; i++)
    {
        printf("Enter %d element of array1: ",(i+1));
        scanf("%d",&arr1[i]);
    }

    //Entering details of array2;
    int n2;
    printf("\nEnter no. of elements in array2: ");
    scanf("%d",&n2);

    int arr2[n2];
    for(int i=0; i<n2; i++)
    {
        printf("Enter %d element of array1: ",(i+1));
        scanf("%d",&arr2[i]);
    }

    int i=0,j=0,k=0;
    int merged[n1+n2];

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        merged[k++] = arr1[i++];
    }

    while(j<n2)
    {
        merged[k++] = arr2[j++];
    }

    printf("\nMerged Array:\n");
    for(int i=0; i<k; i++)
    {
        printf("%d",merged[i]);
    }

    return 0;
    
}