// Student record management system

struct student
{
    int rollNo;
    char name[50];
    float marks;
};

#include<stdio.h>

int main()
{
    struct student s[100];
    int choice,n=0;
    
    do
    {
        printf("---Student Record Management System---\n");
        printf("1. Add student\n");
        printf("2. Display Student record\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter student rollNo: ");
            scanf("%d",&s[n].rollNo);

            printf("Enter name of student: ");
            scanf("%s",s[n].name);

            printf("Enter marks of student: ");
            scanf("%f",&s[n].marks);

            n++;
            printf("Student added successfully\n");
            break;

            case 2:
            printf("\nStudent Details:\n");

            for(int i=0; i<n; i++)
            {
                printf("RollNo: %d\nName: %s\nMarks:%.2f\n",
                       s[i].rollNo,s[i].name,s[i].marks);
            }
            break;

            case 3:
            printf("\nThank you\n");
            break;

            default :
            printf("Enter valid choice");

        }
        
    } while (choice !=3);
    
    return 0;
}