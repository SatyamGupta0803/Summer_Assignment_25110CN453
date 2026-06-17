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
        printf("Enter %d element of Array1: ",(i+1));
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

    int k=0;
    int Union[numb1+numb2];

    //Copying array1 in the union
    for(int i=0; i<numb1; i++)
    {
        Union[k] = arr1[i];
        k++;
    }

    //Entering different element from array2 into union array
    for(int i=0; i<numb2; i++)
    {
        int found =0; 

        for(int j=0; j<k; j++)
        {
            if(arr2[i]==Union[j])
            {
                found =1;
                break;
            }
        }

        if(found==0)
        {
            Union[k] = arr2[i];
            k++;
        }
    }

    printf("\nUnion Array: \n");
    for(int i=0; i<k; i++)
    {
        printf("%d\t",Union[i]);
    }

    return 0;
}