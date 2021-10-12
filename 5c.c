#include<stdio.h>
#include<stdlib.h>
int main()
{
         int array[100], position, c,d, n, value;
           printf("Enter number of elements in array\n");
           scanf("%d", &n);

           printf("Enter %d elements\n", n);
           for (c = 0; c < n-1; c++)
              scanf("%d", &array[c]);

        for(c=0;c<n;c++)
        {
          for(d=c+1;d<n;d++)
           {
            if(array[c]==array[d]){
              printf("The array is not unique\n");
                exit(0);
            }
            }
        }
        printf("The array is unique\n");
}