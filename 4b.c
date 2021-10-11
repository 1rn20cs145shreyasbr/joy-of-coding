#include<stdio.h>
int main()
{
        int Mrint[7], i;
        float Mrfloat[7];
        char Mrchar[7];
        printf("Enter the daily wages of Mrint in a week\n");
        for(i=0;i<6;i++)
         scanf("%d",&Mrint[i]);

         printf("Enter the daily wages of Mrfloat in a week\n");
        for(i=0;i<6;i++)
         scanf("%f",&Mrfloat[i]);

        printf("Enter the letters in which the Mrchar remember\n");
        for(i=0;i<7;i++)
          scanf("%c",&Mrchar[i]);

        printf("\n The daily wages of the Mrint are\t");
        for(i=0;i<6;i++)
          printf("Rs %d\t",Mrint[i]);
        printf("\nThe reverese order\t");
        for(i=5;i>=0;i--)
          printf("Rs %d\t",Mrint[i]);

        printf("\n The daily wages of the Mrfloat are\t");
        for(i=0;i<6;i++)
          printf("Rs %.2f\t",Mrfloat[i]);
        printf("\nThe reverese order\t");
        for(i=5;i>=0;i--)
          printf("Rs %.2f\t",Mrfloat[i]);

        printf("\n The way Mrchar remember the days\t");
        for(i=0;i<7;i++)
          printf("%c\t",Mrchar[i]);
        printf("\nThe reverese order\t");
        for(i=7;i>0;i--)
          printf("%c\t",Mrchar[i]);
        printf("\n");
}