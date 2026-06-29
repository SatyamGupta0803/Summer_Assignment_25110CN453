#include <stdio.h>

int main()
{
    int arr[100], numb = 0;
    int choice;

    do
    {
        printf("\n===== Menu-Driven Array Operations =====\n");
        printf("1. Enter Array Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Sum of Elements\n");
        printf("4. Find Largest Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &numb);

                for(int i = 0; i < numb; i++)
                {
                    printf("Enter %d element of array: ",(i+1));
                    scanf("%d", &arr[i]);
                }
                printf("\nArray entered successfully.\n");
                break;

            case 2:
                if(numb == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for(int i = 0; i < numb; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(numb == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    int sum = 0;
                    for(int i = 0; i < numb; i++)
                    {
                        sum += arr[i];
                    }
                    printf("Sum of Elements = %d\n", sum);
                }
                break;

            case 4:
                if(numb == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                   int largest = arr[0];
                    for(int i = 1; i < numb; i++)
                    {
                        if(arr[i] > largest)
                            largest = arr[i];
                    }
                    printf("Largest Element = %d\n", largest);
                }
                break;

            case 5:
                printf("Thank you for using the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}