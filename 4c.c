#include<stdio.h>
int main()
{
        int Mrint[7], i,sum=0 , avg;
        float Mrfloat[7],sumf=0,avgf;
        char Mrchar[7];
        printf("Enter the daily wages of Mrint in a week\n");
        for(i=0;i<6;i++)
         scanf("%d",&Mrint[i]);

         printf("Enter the daily wages of Mrfloat in a week\n");
        for(i=0;i<6;i++)
         scanf("%f",&Mrfloat[i]);

        for(i=0;i<6;i++)
        {
          sum=sum+Mrint[i];
        }

        for(i=0;i<6;i++)
        {
          sumf=sumf+Mrfloat[i];
        }

        avg=sum/6;
        avgf=sumf/6;
        printf("\nThe weekly salary of Mrint is %d\n",sum);
        printf("The averege salary of Mrint is %d\n",avg);
         printf("The weekly salary of Mrfloat is %.2f\n",sumf);
        printf("The averege salary of Mrfloat is %.2f\n",avgf);
}