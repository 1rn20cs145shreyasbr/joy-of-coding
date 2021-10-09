#include<stdio.h>
int main()
{
        int n,sum=0 , digit ,fsum=0;
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0)
        {
         digit=n%10;
         n=n/10;
         sum=sum+digit;
        }
        printf("the sum of the digits of the number is %d\n",sum);
        while(sum!=0)
        {
         digit=sum%10;
         sum=sum/10;
         fsum=fsum+digit;
        }
        printf("the sum of the digits of the number in single digit is %d\n",fsum);
}