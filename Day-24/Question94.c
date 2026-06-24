//string compression

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the String: ");
    scanf("%s",str);           //Entering the String

    //Loop for string compression

    for(int i=0; str[i]!='\0'; i++)
    {
        int count =1;

        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        
        printf("%c%d",str[i],count);
    }

    return 0;
}