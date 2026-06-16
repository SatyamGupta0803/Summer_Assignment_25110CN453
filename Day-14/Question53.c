#include<stdio.h>

int main()
{
    int numb;
    printf("Enter number of terms: ");
    scanf("%d",&numb);

    int arr[numb];     //Array initialization

    //Loop to enter elements

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter element to Search: ");
    scanf("%d",&x);

    //Loop to search element

    int key =0,i=0;
    while(i<numb)
    {
        if(arr[i]==x)
        {
           key =1;
           break;
        }
        i++;
    }

    if(key==1)
    printf("Element %d found at %d position of the array",x,(i+1));

    else
    printf("Unsuccessful Search");

    return 0;
}