// Non-repeating character;

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);        //ENtering the string;

    //printing first non-repeating character;

    for(int i=0; str[i]!= '\0'; i++)
    {
        int count=0;

        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(count==1)
        {
            printf("First non-repeating Character: %c",str[i]);
            return 0;
        }
    }

    printf("No non-repeating Character found");
    return 0;
}