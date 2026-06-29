//Library Management System

struct library
{
    int id;
    char author[30];
    char title[30];
};

#include<stdio.h>

int main()
{
    struct library lib[100];

    int choice,numb;

    do
    {
        printf("\n===Library Management System===");
        printf("\n1. Add Books");
        printf("\n2. Display Date");
        printf("\n3. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter number of books to Add: ");
            scanf("%d",&numb);

            for(int i=0; i<numb; i++)
            {
                printf("Enter BookId: ");
                scanf("%d",&lib[i].id);

                printf("Enter author Name: ");
                scanf("%s",lib[i].author);

                printf("Enter title: ");
                scanf("%s",lib[i].title);
            }

            printf("\nDetails Added Successfully\n");

            break;

            case 2:
            //Displaying details

            if(numb==0)
            printf("\nNo books added\n");

            else
            {
                for(int i=0; i<numb; i++)
                 {
                     printf("\nBookId: %d\nAuthor Name: %s\nBook Title: %s\n",
                                lib[i].id,lib[i].author,lib[i].title);
                 }
            }
            break;

            case 3:
            printf("\nThanking you");
        
            break;

            default :
            printf("\nEnter valid choice\n");

        }

    } while (choice !=3);

    return 0;
    
}