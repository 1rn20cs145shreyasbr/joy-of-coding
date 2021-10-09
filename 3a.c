#include<stdio.h>
int main()
{
        int n ,i=0 ,rev=0, digit ;
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0)
        {
         digit=n%10;
         printf(" %d",digit);
         n = n/10;
         rev = (rev*10)+digit;
         i++;
        }
        printf(" are the digits\n");
        printf("\n reversed number is %d\n",rev);
        printf(" the number of digits are %d \n",i);
}