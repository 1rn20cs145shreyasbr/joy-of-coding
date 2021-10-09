#include<stdio.h>
int main()
{
        int  n ,rev=0 , digit ;
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0)
        {
         digit=n%10;
         n=n/10;
         rev = (rev*10)+digit;
        }
        while(rev!=0)
        {
         digit=rev%10;
         rev=rev/10;
         if(digit==0)
           continue;
         printf("%d",digit);
        }
        printf("\n");
}