#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the Decimal number : ");
    scanf("%d",&numb);  //Entering the Decimal number;

    //Decimal to binnary conversion;
    int temp = numb;
    int binary[50];
    
   int i=0;
   while(numb>0)
   {
    int rem = numb%2;
    binary[i] = rem;
    numb /=2;
    i++;
   }
   
   printf("Binary Number :\n");
   for(int j=i-1;j>=0;j--)
   {
    printf("%d\t",binary[j]);
   }
   
    return 0;
}