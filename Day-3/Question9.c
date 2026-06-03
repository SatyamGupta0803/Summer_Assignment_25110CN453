#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number : ");
    scanf("%d",&numb);   //Taking input of the number;

    //Checking whether prime or not
    int count =0;
    for(int i=1;i<=numb/2;i++)
    {
        if(numb%i==0)
        count++;
    }
    if(count ==1)
    printf("%d is a Prime number",numb);
    else
    printf("%d is not a Prime Number",numb);

}