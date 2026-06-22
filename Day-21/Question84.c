//UpperCase & LowerCase Conversion;

#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[50];
    printf("Enter the String: ");
    gets(str);  //Entering the String;

    //Into UpperCase

    for(int i=0; i<str[i]!='\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("\nUpperCase: ");
    puts(str);

    //Into LowerCase;
    for(int i=0; i<str[i]!='\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("\nLowerCase: ");
    puts(str);
}