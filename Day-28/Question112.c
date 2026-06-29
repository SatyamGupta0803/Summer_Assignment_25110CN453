//Contact Management System

#include<stdio.h>

struct contact
{
    char name[30];
    long long int number;
};

int main()
{
    struct contact cnt[100];
    int choice,numb=0;

    do
    {
        printf("===Contact Management System===");
        printf("\n1. Add Contact");
        printf("\n2. Display Details");
        printf("\n3. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter Number of contacts to add: ");
            scanf("%d",&numb);

            for(int i=0; i<numb; i++)
            {
                printf("Enter name%d: ",(i+1));
                scanf("%s",cnt[i].name);

                printf("Enter %d Phone Number: ",(i+1));
                scanf("%lld",&cnt[i].number);

                printf("\n");
            }

            printf("\nDetails Added Successfully\n");
            break;

            case 2:
            if(numb ==0)
            printf("\nNo contacts found");

            else
            {
                printf("\n---Contacts Details---\n");

                for(int i=0; i<numb; i++)
                 {
                      printf("Name: %s\nPhone Number: %lld",
                               cnt[i].name,cnt[i].number);

                     printf("\n");
                }
            }
            break;

            case 3:
            printf("\nThank you for using Contact Management System\n");
            break;

            default:
            printf("\nEnter valid choice\n");
        }

    } while (choice !=3);

    return 0;
    
}