//Diagonal Sum

#include<stdio.h>
int main()
{
    int r1,c1;
    printf("ENter row size: ");
    scanf("%d",&r1);
    printf("Enter column size: ");
    scanf("%d",&c1);

    int arr[r1][c1];   //Array Initialization

    //Entering elements

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nEntred Matrix:\n");
        for(int i=0; i<r1; i++)
        {
           for(int j=0; j<c1; j++)
           {
              printf("%d\t",arr[i][j]);
              
            }
            printf("\n");
        }

         int sum=0;
 
         //Sum of Diagonal Element

         for(int i=0; i<r1; i++)
        {
          for(int j=0; j<c1; j++)
          {
              if(i==j)
              {
                 sum += arr[i][j];
              }
           }
        }

    printf("Sum of Diagonal Elements: %d",sum);

    return 0;
}