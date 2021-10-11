#include <stdio.h>
int main()
{
        int arr[10];
        int x,i,count=1;
        printf(" Enter the numbers from 0 to 9 in random way\n");
        for(i=0;i<10;i++)
        {
         scanf("%d",&arr[i]);
        }
        printf("Enter the number want to search\n");
        scanf("%d",&x);
        for(i=0;i<10;i++,count++)
        {
                if(arr[i]==x)
                break;
        }
        printf("attempts=%d\n",count);
        return 0;
}