// Menu Driven Calculator

#include<stdio.h>

int main()
{
    int choice; 
    float numb1,numb2,result;

    do
    {
        printf("===Menu Driven Calculator===");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter 1st Number: ");
            scanf("%f",&numb1);

            printf("Enter 2nd Number: ");
            scanf("%f",&numb2);

            result = numb1+ numb2;

            printf("Additioin: %.2f\n",result);
            break;

            case 2:
            printf("\nEnter 1st Number: ");
            scanf("%f",&numb1);

            printf("Enter 2nd Number: ");
            scanf("%f",&numb2);

            result = numb1 - numb2;

            printf("Subtraction: %.2f\n",result);
            break;

            case 3:
            printf("Enter 1st Number: ");
            scanf("%f",&numb1);

            printf("Enter 2nd Number: ");
            scanf("%f",&numb2);

            result = numb1 * numb2;

            printf("Multiplication: %.2f\n",result);
            break;

            case 4:
            printf("Enter 1st Number: ");
            scanf("%f",&numb1);

            printf("Enter 2nd Number: ");
            scanf("%f",&numb2);

            if(numb2 !=0)
            result = numb1/numb2;
            
            else
            printf("Division By zero is not possible");

            printf("Division: %.2f\n",result);
            break;

            case 5:
            printf("\nThank you for using calculator");
            break;

            default:
            printf("\nEnter valid choice");

        }

    } while (choice !=5);

    return 0;
    
}