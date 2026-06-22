//String Length

#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the String: ");
    gets(str);      //scanf("%[^\n]s",&str); 

    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }

    printf("The length of String : %d",i);

    return 0;
} 