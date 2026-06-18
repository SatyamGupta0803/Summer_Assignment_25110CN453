// Binary Search

#include<stdio.h>
int main()
{
    int numb; 
    printf("Enter size of array: ");
    scanf("%d",&numb);

    int arr[numb];

    //Entering element in array

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int x;
    printf("\nEnter element to Search: ");
    scanf("%d",&x);

    //Serching

    int mid,low=0,high= numb-1;
    int flag=0;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(arr[mid]==x)
        {
            flag =1;
            break;
        }

        else if(arr[mid]>x)
        {
            high = mid-1;
        }

        else
        {
            low = mid+1;
        }
    }

    if(flag==1)
    printf("\nElement %d found at %d index",x,(mid+1));

    else
    printf("Unsuccessful Search");

    return 0;
}