//String rotation

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    printf("Enter first String: ");
    scanf("%s",str1);   //Entering first String

    char str2[100];
    printf("Enter second String: ");
    scanf("%s",str2);    //Entering second String

    //length checking
    if(strlen(str1) != strlen(str2))
    {
        printf("Not a string rotation");
        return 0;
    }

    char temp[200];
    strcpy(temp,str1);       //Copying str1 into temp string

    strcat(temp,str1);       //adding str1 & temp string

    if(strstr(temp,str2))
    printf("String rotation");

    else
    printf("No string Rotation");

    return 0;
}