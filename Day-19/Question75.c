//Transpose Matrix

#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter row size: ");
    scanf("%d",&r1);
    printf("Enter column size: ");
    scanf("%d",&c1);

    int arr[r1][c1];    //Matrix Initialization

    //Entering elements in matrix

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //Entered matrix printing

    printf("\nEntered Matrix:\n");

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Transpose Matrix

    printf("\nTranspose of Entered Matrix:\n");

    for(int i=0; i<c1; i++)
    {
        for(int j=0; j<r1; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}