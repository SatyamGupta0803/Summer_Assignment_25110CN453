#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    int maxLen = 0;
    char longest[100];

    char word[100];
    int j = 0;

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(strlen(word) > maxLen)
            {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest Word: %s", longest);

    return 0;
}