#include<stdio.h>
int main()
{
        int code ,i=1,j,rem,pin=0;
        printf("Enter the code\n");
        scanf("%d",&code);
        while(code!=0)
        {
         rem=code%10;
         code=code/10;
         if(rem==9)
           pin=pin+0;
         else
          pin=pin+(rem+1)*i;
          i=i*10;
        }
        printf("ATM PIN is %d\n",pin);
}