#include<stdio.h>
#include<string.h>
#define rate 1.5
#define start "*****************************************************************"
#define N1 8.75
#define N2 9.33
#define N3 10.00
#define N4 11.20
int main(void)
{       int choose;
        float basic;
        float hour,salary;
        float taxex;
        step: printf(start);
        printf("\nEnter the number corresponding to the desired pay rate or action:");
        printf("\n1) $8.75/hr              2) $9.33/hr");
        printf("\n3) $10.00/hr             4) $11.20/hr");
        printf("\n5) quit\n");
        printf(start);
        printf("\nInput options:");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:basic = N1;
                break;
        case 2:basic = N2;
                break;
        case 3:basic = N3;
                break;
        case 4:basic = N4;
                break;
        case 5:goto step2;
        default:printf("input error,please input number 1-5\n");
                goto step;
        }
        printf("Enter your work hour:");
        scanf("%f",&hour);
        if (hour <= 40)
        {       salary = basic * hour;
                if (salary <= 300)
                {
                        taxex = salary * 0.15;
                }
                else if (salary <= 450)
                {
                        taxex = (salary-300)*0.20 + 45;
                }
                printf("your salary is %.2f,your taxex is %.2f,your net income is %.2f",salary,taxex,salary-taxex);
        }
        
        else if (hour > 40)
        {       salary = (hour - 40)*1.5*basic+40*basic;
                if (salary <= 450)
                {
                        taxex = (salary-300)*0.20 + 45;
                }
                else if (salary > 450)
                {
                        taxex = (salary - 450)*0.25 +65;
                }
                printf("your salary is %.2f,your taxex is %.2f,your net income is %.2f",salary,taxex,salary-taxex);
                
        }
       step2: return 0;
}