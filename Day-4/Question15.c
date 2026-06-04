#include<stdio.h>
#include<math.h>
int main()
{
    //Entering the number;
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);

    //Counting the no. of digits;
    int count =0;
    int originalNumb = numb; //Save the original input
    int temp =numb;
    while(numb>0)
    {
        count++;
        numb/=10;
    }
    //Loop For Armstrong Checking;
    int sum =0;
    while(temp>0)
    {
        int rem = temp%10;
        sum += pow(rem,count);
        temp /= 10;
    }
    if(sum == originalNumb)
    printf("%d is an Armstrong number",originalNumb);
    else
    printf("%d is not an Armstrong number",originalNumb);
    return 0;
}