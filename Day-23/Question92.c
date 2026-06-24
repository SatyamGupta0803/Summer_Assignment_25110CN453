//Maximum occuring element

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);    //Entering the String

    //Loop to get maximum occuring element

    int temp=0;
    char ch;
    for(int i=0; str[i]!='\0'; i++)
    {
        int count =0;

        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            count++;
        }

        if(count>temp)
        {
            temp =count;
            ch = str[i];
        }
    }
    printf("Maximum occuring character: %c",ch);

    return 0;
}