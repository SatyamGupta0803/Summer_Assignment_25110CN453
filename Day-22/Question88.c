//Space Removal

#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);      //Entering the Element;

    //Loop for space Removal

    int j=0;

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] !=' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
    printf("String After removing Spaces: %s",str);

    return 0;
}