#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
        float a, b,c ;
        int d;
        char op;
       printf("Enter an expression a+b\n");
        scanf("%f%c%f",&a,&op,&b);
        switch(op)
        {  case'+':
           c=a+b;
           printf("sum=%f\n",c);
           break;
           case'-':
           c=a-b;
           printf("difference=%f\n",c);
           break;
           case'*':
           c=a*b;
           printf("product=%f\n",c);
           break;
           case'/':
           if(b==0)
           {
                printf("b  cannot be zero\n");
                exit(0);
           }
           else
           {
                c=a/b;
                printf("quotient=%f\n",c);
                break;
           }
           default:
           printf("Invalid operator\n");
        }
}