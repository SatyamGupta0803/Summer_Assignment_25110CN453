#include<stdio.h>
int main()
{
    int numb1;
    printf("Enter size of first Array: ");
    scanf("%d",&numb1);

    int arr1[numb1];

    //Entering elements in first array

    for(int i=0; i<numb1; i++)
    {
        printf("Enter %d element of array1: ",(i+1));
        scanf("%d",&arr1[i]);
    }

    int numb2;
    printf("\nEnter size of Second Array: ");
    scanf("%d",&numb2);

    int arr2[numb2];

    //Entering element in array2

    for(int i=0; i<numb2; i++)
    {
        printf("Enter %d elements of array2: ",(i+1));
        scanf("%d",&arr2[i]);
    }

    //copying array1 into merged array

    int merged[numb1 + numb2];

    for(int i=0; i<numb1; i++)
    {
        merged[i] = arr1[i];
    }

    //copying array2 into merged array

    for(int i=0; i<numb2; i++)
    {
        merged[numb1+i] = arr2[i];
    }

    printf("\nMerged Array =\n");

    for(int i=0; i<(numb1+numb2); i++)
    {
        printf("%d\t",merged[i]);
    }

    return 0;

}