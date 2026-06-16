#include<stdio.h>
int main()
{
    int numb;
    printf("Enter number of element: ");
    scanf("%d",&numb);

    int arr[numb];

    for(int i=0; i<numb; i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int maxFreq = 0;
    int maxElement;

    for(int i=0; i<numb; i++)
    {
        if(arr[i]== -1)
        continue;

        int count =1;

        for(int j=i+1; j<numb; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]= -1;
            }
        }

        if(count>maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Element %d has maximum frequency of %d times ",maxElement,maxFreq);

    return 0;

}