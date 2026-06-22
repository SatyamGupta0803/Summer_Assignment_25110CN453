//Vowel And Consonat count;

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the String: ");
    gets(str);    //entering the String

    //Vowel & Consonant counting

    int countVowel=0,countConsonant=0;

    for(int i=0; i<str[i]!= '\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'
            || str[i]=='A'|| str[i]=='E'||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
        countVowel++;

        else if((str[i]>'A' && str[i]<'Z') || (str[i]>'a' && str[i]<'z'))
        countConsonant++;
    }
    printf("\nNumber of Vowels: %d",countVowel);
    printf("\nNumber of Consonant: %d",countConsonant);

    return 0;
}