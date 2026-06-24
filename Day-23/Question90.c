//First repeating character

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);   //Entering the String;

    //Loop to find first repeating character;

    for(int i=0; str[i]!='\0'; i++)
    {
        int count =0; 

        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            count++;
        }

        if(count>1)
        {
            printf("First repeating character: %c",str[i]);
            return 0;
        }
    }

    printf("No repeating character found");
    return 0;
}