//Alphabetically Names Sorting;

#include<stdio.h>
#include<string.h>

int main()
{
    char names[3][20];

    for(int i=0; i<3; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                char temp[20];

                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted Names:\n");

    for(int i=0; i<3; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}