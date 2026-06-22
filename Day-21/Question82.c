//Reverse String

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the String: ");
    gets(str);    //Entering elements in string;

    strrev(str);  //Reversing the Entered String;

    printf("\nReversed String:\n");
    puts(str);

    return 0;
}