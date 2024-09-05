#include<stdio.h>

int msin(){
    int user, sum =0;

    printf("enter your value");
    scanf("%d",&user);

    for (int  start = 1; start <= user; start++)
    {
      sum = sum + start;
    }
     printf("%d",sum);   
}