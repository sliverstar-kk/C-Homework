/* binary.c -- prints integer in binary form */
#include <stdio.h>
void to_binary(unsigned long n);
void to_base_n(unsigned long n,unsigned);

int main(void)
{
    unsigned long number;
    unsigned base;
    printf("Enter an integer and switch base(q to quit):\n");
    while (scanf("%lu%u", &number,&base) == 2)
    {
        printf("switch equivalent: ");
        to_base_n(number,base);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    
    return 0;
}

void to_binary(unsigned long n)   /* recursive function */
{
    int r;
    
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');
    
    return;
}

void to_base_n(unsigned long n,unsigned base)
{
    int r;

    if (base >= 2 && base <= 10)
    {
        r = n % base;
        if (n >= base)
        {
            to_base_n(n/base,base);
        }
        printf("%d",r);
    }
}