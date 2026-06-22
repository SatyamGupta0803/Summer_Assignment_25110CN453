//Character Frequency

#include<stdio.h>
int main()
{
    char str[50];
    printf("ENter the String: ");
    fgets(str,sizeof(str),stdin);   //Entering the element

    //Loop for character frequency

    for(int i=0; str[i] != '\0'; i++)
    {
        int count =1;

        if(str[i] == '*')
        continue;

        for(int j=i+1; str[j] != '\0'; j++)
        {
            if(str[i]==str[j])
            {
                count ++;
                str[j] = '*';
            }
        }

        printf("%c = %d\n",str[i],count);
    }

    return 0;
}