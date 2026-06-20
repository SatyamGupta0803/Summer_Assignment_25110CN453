//Symmetric Matrix

#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter row size: ");
    scanf("%d",&r1);
    printf("Enter column size: ");
    scanf("%d",&c1);

    int arr[r1][c1];  //Matrix Initialization

    //Entering elements in Matrix

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

       printf("\nEnterd Matrix:\n");

       //Printing Enterd Matrix

         for(int i=0; i<r1; i++)
        {
            for (int j=0; j<c1; j++)
            {
                printf("%d\t",arr[i][j]);
         }
         printf("\n");
        }
    
         int symmetry =1;

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
              if(arr[j][i] != arr[i][j])
              {
                symmetry =1;
                break;
               }
            }
             
        }

    if(symmetry)
    printf("Symmetry Matrix");

    else
    printf("Not a Symmetry Matrix");

    return 0;
}