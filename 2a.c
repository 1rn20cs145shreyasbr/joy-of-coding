#include<stdio.h>
int main()
{
        int age;
        printf("Enter your age\n");
        scanf("%d",&age);
        (age>=18)?(printf("Eligible for voting")):(printf("Not eligible for voting"));
        printf("\n");
}