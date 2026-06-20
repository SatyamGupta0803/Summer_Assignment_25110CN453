//Matric Subtraction;

#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter row size of Matrix1: ");
    scanf("%d",&r1);
    printf("Enter column size of Matrix1: ");
    scanf("%d",&c1);

    int arr1[r1][c1];  //Initialization matrix1;

    //Entering element in matrix1

    printf("\nEntering element in matrix1:\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    int r2,c2;
    printf("\nEnter row size of Matrix2: ");
    scanf("%d",&r2);
    printf("Enter column size of Matrix2: ");
    scanf("%d",&c2);

    int arr2[r2][c2];  //Initializing matrix2;

    //Entering element in matrix2;

    printf("\nEntering elements in matrix2: \n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    //Adding the matrices;

    int arr3[r1][c2];
    
    if(r1==r2 && c1==c2)
    {
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<r2; j++)
            { 
              arr3[i][j] = arr1[i][j] - arr2[i][j];
            }
        }

        printf("\nAdded Matrix:\n");

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
    }

    else
    printf("Subtraction is not possible");

    return 0;

}