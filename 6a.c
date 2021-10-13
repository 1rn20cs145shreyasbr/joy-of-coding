#include <stdio.h>
int main()
{
            char ch, s1[100],c,chara,s2[100]="RNS";
            printf("Different ways of reading character\n");
            printf("Enter any character:It will read using scanf\n");
            scanf("%c",&ch);

            printf("Enter any character: It will read using getch\n");
            c=getch();
            printf("Enter the character: It will read using getche\n");
            chara=getche();
            printf("\nDifferent ways of printing character\n");
            printf("Printing character using printf statement\n");
            printf("%c,%c,%c",ch,c,chara);
            printf("\nPrinting character using putchar\n");
            putchar(ch );
            putchar(c );
            putchar(chara );
            printf("\nDifferent ways of reading string\n");
            printf("Enter any string: It will read using scanf\n");
            scanf("%s",s1);
            printf("\nDifferent ways of printing string\n");
            printf("Printing string using printf statement\n");
            printf("%s %s",s1,s2);
            printf("\nPrinting string using puts\n");
            puts(s1);
            puts(s2);
            return 0;




}
