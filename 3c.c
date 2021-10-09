#include<stdio.h>
int main()
{
        int n,sum=0 , digit ,fsum=0;
        printf("Enter the number\n");
        scanf("%d",&n);
        do
         {
          digit=n%10;
          n=n/10;
          digit++;
          sum=sum+digit;
         }
        while(n!=0);
        printf("the sum of the digits of the number is %d\n",sum);
}