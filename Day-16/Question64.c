#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<numb; i++)
    {
        if(arr[i]== -1)
        continue;

        for(int j=i+1; j<numb; j++)
        {
            if(arr[i]==arr[j])
            arr[j] = -1;
        }
    }

    printf("\nArray after duplicate removal:\n");

    for(int i=0; i<numb; i++)
    {
        if(arr[i] != -1)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}