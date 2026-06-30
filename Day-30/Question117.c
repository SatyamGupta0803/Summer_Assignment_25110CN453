//Student record System using array and string

#include <stdio.h>

int main()
{
    int roll[100],choice;
    int numb =0;
    char name[100][50];

    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of students: ");
                scanf("%d", &numb);

                for(int i = 0; i < numb; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf("%s", name[i]);
                }

                printf("\nStudent records added successfully!\n");
                break;

            case 2:
                if(numb == 0)
                {
                    printf("No student records found.\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");

                    for(int i = 0; i < numb; i++)
                    {
                        printf("\nRoll Number : %d", roll[i]);
                        printf("\nName        : %s\n", name[i]);
                    }
                }
                break;

            case 3:
                printf("Thank you for using the Student Record System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}