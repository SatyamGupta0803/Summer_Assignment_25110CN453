// ATM Simulation

#include<stdio.h>

int main()
{
    int choice,deposit,withdraw;
    float balance = 50000;      //Setting initial balance

    do
    {
        printf("--ATM Simulation System--\n");      // Options available in ATM System
        printf("1. Check Balance\n");                   
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        //Choice selection
        printf("Enter choice: ");
        scanf("%d",&choice);

        int amount;
        switch(choice)
        {
            case 1:
            printf("Available Balance: %.2f\n",balance);
            break;

            case 2:
            printf("Enter amount to Deposit: ");
            scanf("%d",&amount);

            if(amount>0)
            balance += amount;

            printf("Balance after Deposit: %.2f\n",balance);
            break;

            case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d",&amount);

            if(amount<balance)
            {
                 balance -= amount;
                 printf("Amount withdraw successfully\n");
            }

            else if(amount<=0)
            printf("Enter a valid amount\n");

            else
            printf("Insufficient Balance\n");

            printf("Balance after Withdraw: %.2f\n",balance);
            break;

            case 4:
            printf("Thank You");
            break;

            default :
            printf("Enter a valid choice");
        }

    } while (choice !=4);
    
    return 0;
}