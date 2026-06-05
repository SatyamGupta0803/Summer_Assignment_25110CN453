#include <stdio.h>

int main()
{
    int numb;
    int largestPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &numb);

    for(int fact = 2; fact <= numb; fact++)
    {
        if(numb % fact == 0)
        {
            int count = 0;

            for(int i = 1; i <= fact; i++)
            {
                if(fact % i == 0)
                    count++;
            }

            if(count == 2)
                largestPrime = fact;
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}