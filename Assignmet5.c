#include<stdio.h>
#define start "********************************************************************"
#define Artichoke 2.05
#define Beet  1.15
#define Carrot 1.09
void order(void);
float calculation(float money,float weight);
float discount(float money);
float Shipping(float weight);
int main(void) 
{       int choose;
        float weight;
        float art,bt,ca;
        float value1,value2,value3;
        value1 = value2 = value3 = 0;
        art = bt = ca =0;
        order();
        scanf("%d",&choose);

        while (choose <5 && choose > 0)
        {       if (choose == 4)
        {       printf("The total price of the goods is %f",value1+value2+value3);
                printf("\nyour Ordered weight is %f",art+bt+ca);
                printf("\nThis your discont %f", discount(value1+value2+value3));
                printf("\nThis is your shipping %f",Shipping(art+bt+ca));
                return 0;
        }
                printf("Enter the purchased weight:");
                scanf("%f",&weight);
                switch (choose)
                {
                case 1:art += weight;
                        value1 =calculation(Artichoke,art);
                        break;
                case 2:bt += weight;
                        value2 =calculation(Beet,bt);
                        break;
                case 3:ca += weight;
                        value3 = calculation(Carrot,ca);
                        break;
                }
                order();
                scanf("%d",&choose);
        }
        printf("input error,please try again");

}

void order(void)
{
        printf(start);
        printf("\nEnter the vegetable options you want to buy and the vegetable weight ");
        printf("\n1) artichoke                                2) beet");
        printf("\n3) carrot                                   4) Settlement\n");
        printf(start);
        printf("\nEnter your choose:");
}

float calculation(float money,float weight)
{
        float sum = 0;
        sum = money*weight;
        return sum;
}

float discount(float money)
{
        if (money > 100)
        {
                money = money *0.05;
        }
        return money;
}

float Shipping(float weight)
{       float money;
        if (weight <= 5)
        {
                money = 6.5;
        }
        else if (weight < 20)
        {
                money = 14;
        }
        else if (weight >= 20)
        {
                money = 14 + (weight - 20)*0.5;
        }
        return money;
}