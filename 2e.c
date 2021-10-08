#include<stdio.h>
int main()
{
        int copies , amt, dis ,cost ;
        printf("Enter the number of copies required\n");
        scanf("%d" ,&copies);
        cost=copies*10;
        printf(" cost of blue books %d\n",cost);
        if(copies<=10000)
        {
         printf(" No discount\n");
         amt = copies*10;
         dis =0;
        }
        else if(copies>10000 && copies<=15000)
        {
         printf(" you have 10 percent discount\n");
         amt =copies*9;
         dis =copies*1;
        }
        else if(copies>15000 && copies<=200000)
        {
         printf(" you have 20 percent discount\n");
         amt =copies*8;
         dis =copies*2;
        }
        printf("Discount is %d\n",dis);
        printf("Total amount %d\n",amt);
}