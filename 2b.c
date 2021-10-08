#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n1, n2 , max;
        printf("Enter the two numbers\n");
        scanf("%d %d",&n1,&n2);
        if(n1<0||n2<0)
        {
          printf("Input number is invalid \n");
          exit(0);
        }
        else
        {
         max = (n1>n2)?n1:n2;
         printf("Largest of two numbers:%d\n",max);
         return 0;
        }
}