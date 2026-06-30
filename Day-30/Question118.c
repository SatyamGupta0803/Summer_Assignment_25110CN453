//Mini Library system

#include <stdio.h>

int main()
{
    int bookID[100], issued[100];
    char bookName[100][50];
    int numb = 0, choice;

    do
    {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of books: ");
                scanf("%d", &numb);

                for(int i = 0; i < numb; i++)
                {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &bookID[i]);

                    printf("Enter Book Name: ");
                    scanf("%s", bookName[i]);

                    issued[i] = 0;      // 0 = Available
                }

                printf("\nBooks added successfully!\n");
                break;

            case 2:
                if(numb == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\n----- Library Books -----\n");

                    for(int i = 0; i < numb; i++)
                    {
                        printf("\nBook ID   : %d", bookID[i]);
                        printf("\nBook Name : %s", bookName[i]);

                        if(issued[i] == 0)
                            printf("\nStatus    : Available\n");
                        else
                            printf("\nStatus    : Issued\n");
                    }
                }
                break;

            case 3:
            {
                int id, found = 0;

                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                for(int i = 0; i < numb; i++)
                {
                    if(bookID[i] == id)
                    {
                        found = 1;

                        if(issued[i] == 0)
                        {
                            issued[i] = 1;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;
            }

            case 4:
            {
                int id, found = 0;

                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                for(int i = 0; i < numb; i++)
                {
                    if(bookID[i] == id)
                    {
                        found = 1;

                        if(issued[i] == 1)
                        {
                            issued[i] = 0;
                            printf("Book returned successfully.\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;
            }

            case 5:
                printf("Thank you for using the Mini Library System.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}