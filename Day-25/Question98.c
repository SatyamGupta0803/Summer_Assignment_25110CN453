//Common Character

#include<stdio.h>
int main()
{
    char str1[100];
    printf("Enter first String: ");
    fgets(str1,sizeof(str1),stdin);

    char str2[100];
    printf("Enter second String: ");
    fgets(str2,sizeof(str2),stdin);

    //Printing common characters

    printf("\nCommon Characters: \n");
    for(int i=0; str1[i]!='\0'; i++)
    {
        for(int j=0; str2[j]!='\0'; j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c",str1[i]);
                break;
            }
        }
    }

    return 0;
}