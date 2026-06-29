//Ticket Booking System

struct ticket
{
    int ticketID;
    char name[30];
    int seatNo;
};

#include<stdio.h>

int main()
{
    struct ticket tic[100];

    int choice,numb;

    do
    {
       printf("\n===Ticket Booking System===");
       printf("\n1. Book Tickets");
       printf("\n2. Display Booked Tickets");
       printf("\n3. Exit");

       printf("\nEnter choice: ");
       scanf("%d",&choice);

       switch(choice)
       {
         case 1:
         printf("\nEnter no of tickets Booking: ");
         scanf("%d",&numb);

         for(int i=0; i<numb; i++)
         {
            printf("\nEnter BookingId: ");
            scanf("%d",&tic[i].ticketID);

            printf("Enter Name: ");
            scanf("%s",tic[i].name);

            printf("Enter seatNo: ");
            scanf("%d",&tic[i].seatNo);
         }

         printf("\nBooking Details Saved Successfully\n");
         break;

         case 2:

         if(numb==0)
         printf("No Booking Details Available\n");

         else
         printf("\n---Booking Details---\n");
         for(int i=0; i<numb; i++)
         {
            printf("Booking ID: %d\nName: %s\nSeat number: %d\n",
                            tic[i].ticketID,tic[i].name,tic[i].seatNo);
            
            printf("\n");
         }

         break;

         case 3:
         printf("\nThank you for using Ticket Booking System");
         break;

         default:
         printf("\nEnter valid choice\n");

       }

    } while (choice !=3);
    
    return 0;
}