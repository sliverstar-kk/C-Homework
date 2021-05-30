#include<stdio.h>
int main(void)
{
        int number;
        int count = 0;
        int total;
        printf("Enter your number(Positive integer):");
        if (scanf("%d",&number) == 1)
        {       
                for (int i = number -1; i > 1; i--)
                {
                        if (number % i == 0&&number !=1)
                        {
                              count++; 
                        }
                        total = 0;
                        for (int j = i-1; j > 1; j--)
                        {
                                if (i % j == 0&&i != 1)
                                {
                                        total++;
                                }
                        }
                        if (total == 0)
                        {
                                printf("This is a prime number %d\n",i);
                        }
                        
                }
                if (count == 0)
                {
                       printf("This is a prime number %d",number);
                }
                
        }
        else printf("Input error,please enter again");
        return 0;
}