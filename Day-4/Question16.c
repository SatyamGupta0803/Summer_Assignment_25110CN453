#include<stdio.h>
#include<math.h>
int main()
{
    int strtNumb,endNumb;

    //Entering the Range
    printf("Enter starting range : ");
    scanf("%d",&strtNumb);
    printf("Enter last range : ");
    scanf("%d",&endNumb);
     
    //Calculating Armstrong in a range;
    printf("The Armstrong in the given range :\n");
    for(int numb=strtNumb; numb<=endNumb; numb++)
    {
        int originalNumb = numb,sum =0,temp = numb;  //Saving original numb;
        
        //Digit counting
        int count=0;
        while(temp>0)
        {
            count++;
            temp/=10;
        }
        //Armstrong Finding
        temp = numb;  //Restoring the number into temp variable;
        while(temp>0)
        {
            int rem = temp%10;
            sum += pow(rem,count);
            temp /=10;
        }
        if(sum == originalNumb)
        {
            printf("%d\t",originalNumb);
        }
    }
    return 0;
}