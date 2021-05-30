#include<stdio.h>
int main(void){
    int n;
    unsigned present,eval;
     eval = 0;
     present = 1;
    printf("Enter your calculation fib number:");
    scanf("%d",&n);
    while (0 < n--)
    {
        present = present + eval;
        eval = present - eval;
        printf("eval:%u       present:%u\n",eval,present);
    }
    
}