//Anagram Strings;

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not Anagram");
        return 0;
    }

    int freq[256] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
        freq[str1[i]]++;

    for(int i = 0; str2[i] != '\0'; i++)
        freq[str2[i]]--;

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Both Strings are Anagram");

    return 0;
}