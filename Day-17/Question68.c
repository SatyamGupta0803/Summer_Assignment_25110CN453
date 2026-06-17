#include<stdio.h>
int main()
{
    int numb1;
    printf("Enter size of array1: ");
    scanf("%d",&numb1);

    int arr1[numb1];

    //Entering element in array1
    for(int i=0; i<numb1; i++)
    {
        printf("Enter %d element of array1: ",(i+1));
        scanf("%d",&arr1[i]);
    }

    int numb2;
    printf("\nEnter size of array2: ");
    scanf("%d",&numb2);

    int arr2[numb2];

    //Entering element in array2
    for(int i=0; i<numb2; i++)
    {
        printf("Enter %d element of array2: ",(i+1));
        scanf("%d",&arr2[i]);
    }

    //Intersection array

    printf("\nIntersection Array: \n");
    for(int i=0; i<numb1; i++)
    {
        for(int j=0; j<numb2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d\t",arr1[i]);
                break;
            }
        }
    }

    return 0;
}