#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n1,n2,n3,max;
        printf("Enter 3 numbers \n");
        scanf("%d %d %d",&n1 ,&n2 ,&n3);
        if(n1<0||n2<0||n3<0)
        {
          printf("invalid input\n");
          exit(0);
        }
        else
        {
         max =(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
         printf("Largest of three numbers  is %d\n",max);
         return 0;
        }
}