//Inventory Management System

#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int numb = 0, choice;

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of items: ");
                scanf("%d", &numb);

                for(int i = 0; i < numb; i++)
                {
                    printf("\nItem %d\n", i + 1);

                    printf("Enter Item ID: ");
                    scanf("%d", &item[i].id);

                    printf("Enter Item Name: ");
                    scanf("%s", item[i].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &item[i].quantity);

                    printf("Enter Price: ");
                    scanf("%f", &item[i].price);
                }

                printf("\nItems added successfully!\n");
                break;

            case 2:
                if(numb == 0)
                {
                    printf("No items available.\n");
                }
                else
                {
                    printf("\n----- Inventory Details -----\n");

                    for(int i = 0; i < numb; i++)
                    {
                        printf("\nItem ID   : %d", item[i].id);
                        printf("\nItem Name : %s", item[i].name);
                        printf("\nQuantity  : %d", item[i].quantity);
                        printf("\nPrice     : Rs. %.2f\n", item[i].price);
                    }
                }
                break;

            case 3:
                printf("Thank you for using the Inventory Management System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}