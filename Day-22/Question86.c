//Word counting in String

#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);

    //words Counting

    int count =1;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        count++;
    }
    printf("Number of words : %d",count);

    return 0;
}