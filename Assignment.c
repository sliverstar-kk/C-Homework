#include<stdio.h>
int main(void){
       int num,count,math,i,j;
       char letter,word;
       printf("Enter you want to  upper letter:");
       scanf("%c",&letter);
       for(num = letter-65;num >=0;num--)//打印行数
       {
              for (count = 0;count<num;count++)//打印左边空格
              {
                     printf(" ");
              }

              for(i=letter-65,word ='A';i >= num;i--,word++)//打印左半部分字母
              {
                     printf("%c",word);
              }

              for(j=letter-65,word = word - 2;j > num;j--,word--)//打印右半部分字母
              {
                     printf("%c",word);
              }

              /*for(math = 0;math<num;math++)//打印右边空格
              {
                     printf(" ");
              }*/



       printf("\n");
       }
}