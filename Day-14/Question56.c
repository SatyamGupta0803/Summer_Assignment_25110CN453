#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];    //Array Initialization;

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("\nDuplicates: \n");

    for(int i=0; i<numb; i++)
    {
        if(arr[i]==-1)
        continue;

        int count =1;

        for(int j=i+1; j<numb; j++)
        {
            if(arr[i]==arr[j])
            {
                count++ ;
                arr[j] = -1 ;
            }
        }

        if(count>1)
        printf("%d\t",arr[i]);
    }
    return 0;
}