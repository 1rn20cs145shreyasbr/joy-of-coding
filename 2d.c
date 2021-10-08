#include<stdio.h>
int main()
{
        int rank ;
        printf(" Enter the rank\n");
        scanf("%d",&rank);
        if(rank<=3250)
         printf("Mr Engineer can  get admission to any branches in RNSIT college");
        else if(rank>3250 && rank <=6505)
         printf("Mr Engineer can get admission in ISE , E&C and MECH");
        else if(rank>6505 && rank <=12012)
        printf("Mr Engineer can get admission in  E&C and MECH");
        else if(rank>12012 && rank <=22340)
        printf("Mr Engineer can get admission in  MECH");
        else printf(" Mr engineer can't get admisssion in RNSIT\n Better find some other college\n");
        printf("\n");
}