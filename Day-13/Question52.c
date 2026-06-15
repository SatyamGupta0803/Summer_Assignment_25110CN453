#include<stdio.h>

int main()
{
    int numb;
    printf("Enter number of terms: ");
    scanf("%d",&numb);

    int arr[numb];

    //loop to enter elements

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    //loop to count even and odd numbers;

    int countEven=0, countOdd=0;
    for(int i=0; i<numb; i++)
    {
        if(arr[i]%2==0)
        countEven++ ;

        else
        countOdd++ ;
    }

    printf("Even terms : %d\n",countEven);
    printf("Odd Terms : %d",countOdd);

    return 0;
}