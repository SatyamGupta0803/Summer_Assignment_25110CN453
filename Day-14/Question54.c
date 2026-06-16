#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of Elements: ");
    scanf("%d",&numb);

    int arr[numb];      //Array initialization

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<numb; i++)
    {
        int count=1;

        if(arr[i]==-1)
        continue;

        for(int j=i+1; j<numb; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]= -1;
            }
        }

        printf("Element %d found %d times in the array",arr[i],count);
        printf("\n");
    }

    return 0;
}