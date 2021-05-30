#include<stdio.h>
#define start "*****************************************************************"
#define N1 17850
#define N2 23900
#define N3 29750
#define N4 14875
void select(void);
float choose1(float,int);
int main(void)
{       float money;
        int choose;
        float tax;
        select();
        printf("\nEnter your choose:");
        scanf("%d",&choose);
        while (choose <= 5 && choose >= 1)
        {
                switch (choose)
                {
                case 1 :printf("\nEnter your money:");
                        scanf("%f",&money);
                        tax = choose1(money,N1);
                        printf("your should pay:%f\n",tax);
                        break;
                case 2 :printf("\nEnter your money:");
                        scanf("%f",&money);
                        tax = choose1(money,N2);
                        printf("your should pay:%f\n",tax);
                        break;
                case 3 :printf("\nEnter your money:");
                        scanf("%f",&money);
                        tax = choose1(money,N3);
                        printf("your should pay:%f\n",tax);
                        break;
                case 4 :printf("\nEnter your money:");
                        scanf("%f",&money);
                        tax = choose1(money,N4);
                        printf("your should pay:%f\n",tax);
                        break;
                case 5 :printf("bye bye");
                        return 0;
                }
        select();
        printf("\nEnter your choose:");
        scanf("%d",&choose);
        }
        printf("input error,try again");
}
void select(void)
{
        printf(start);
        printf("\nEnter the number corresponding to the desired pay rate or action:");
        printf("\n1) single                      2) Head of household");
        printf("\n3) Married, shared             4) Married, divorced");
        printf("\n5) quit\n");
        printf(start);
}
float choose1(float money,int n)
{       float tax;
        if (money < n)
        {
               tax = money * 0.15;
        }
        else if (money > n)
        {
                tax = n*0.15 + (money - n)*0.28;
        }
        return tax;
}