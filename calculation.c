#include<stdio.h>
#define star "********************************************************************"
double abacus(double,int);
int main(void)
{
    double finance,totally;

    int month,year;
    printf("Enter your investment finance:");
    scanf("%lf",&finance);
    printf("Enter your storage year and month\n");
    printf("year:");
    scanf("%d",&year);
    totally = abacus(finance,year);
    printf("result is:%lf",totally);
}

double abacus(double finance,int year)
{
    int count =1;
    double response_rate;
    printf("your forecast response rate:");
    scanf("%lf",&response_rate);
    while (count <= year)
    {
        finance = (finance * response_rate) + finance;
        count++;
    }
    return finance;
}