//Sum across column;

#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter row size: ");
    scanf("%d",&r1);
    printf("Enter column size: ");
    scanf("%d",&c1);

    int arr[r1][c1];   //Array Initialization

    //Entering elements in Matrix

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    
    //Sum across column
    for(int j=0; j<c1; j++)
    {
        int sum=0;
        for(int i=0; i<r1; i++)
        {
            sum += arr[i][j];
        }
        printf("Column%d Sum = %d\n",(j+1),sum);
        
    }

    return 0;

}