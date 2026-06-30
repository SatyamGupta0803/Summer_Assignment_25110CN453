// Mini project 

#include <stdio.h>

int roll[100], marks[100];
char name[100][50];
int choice,numb=0;

// Function to add students
void addStudent()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &numb);

    for(int i = 0; i < numb; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\nStudent records added successfully!\n");
}

// Function to display students
void displayStudent()
{

    if(numb == 0)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n--------- Student Records ---------\n");

    for(int i = 0; i < numb; i++)
    {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }
}

// Function to search student
void searchStudent()
{
    int rollNo, found = 0;

    if(numb == 0)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("Enter Roll Number to Search: ");
    scanf("%d", &rollNo);

    for(int i = 0; i < numb; i++)
    {
        if(roll[i] == rollNo)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

// Function to calculate average marks
void averageMarks()
{
    int sum = 0;

    if(numb == 0)
    {
        printf("\nNo records found.\n");
        return;
    }

    for(int i = 0; i < numb; i++)
        sum += marks[i];

    printf("\nAverage Marks = %.2f\n", (float)sum / numb);
}

int main()
{
    int choice;

    do
    {
        printf("\n========== Student Management System ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Average Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                averageMarks();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}