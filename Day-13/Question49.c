#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of Terms: ");
    scanf("%d",&numb);

    int arr[numb];
    //Loop to enter elements in array

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element of array: ",(i+1));
        scanf("%d",&arr[i]);
    }
    //Loop to display the array

    printf("Elements of array : \n");
    for(int i=0; i<numb; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}