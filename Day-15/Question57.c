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

    printf("Array in Reversed order: \n");
    for(int i=numb-1; i>=0; i--)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}