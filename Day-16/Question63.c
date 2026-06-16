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

    int sum;
    printf("Enter the Sum: ");
    scanf("%d",&sum);

    printf("\nThe pair is : \n");

    for(int i=0; i<numb; i++)
    {
        for(int j=i+1; j<numb; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("%d,%d\n",arr[i],arr[j]);
            }
        }
    }

    return 0;
}