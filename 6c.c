#include <stdio.h>
#include <string.h>

int main()
{
        char sen[100];
        int l,i;
        printf("Enter the string\n");
        gets(sen);

        l = strlen(sen);

        printf("%c",sen[0]);
        for(i=0;i<l;i++)
        {
         if(sen[i]==' ')
          {
               printf("%c",sen[i+1]);
          }
        }
        printf("\n");
        return 0;
}