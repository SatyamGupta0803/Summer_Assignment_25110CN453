//Palindrome in String

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the String: ");
    gets(str);               //Entering element in String

    char revString[50];
    for(int i=0; str[i] !='\0'; i++)
    {
        revString[i] = str[i];      //Storing the original String
    }

    strrev(str);   //reversing the original String;

    int flag=1;

    for(int i=0; str[i] !='\0'; i++)
    {
        if(revString[i]!=str[i])
        {
            flag =0; 
            break;
        }
    }

    if(flag)
    printf("String is Palindrome");

    else
    printf("String is not Palindrome");

    return 0;
}