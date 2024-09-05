#include<stdio.h>

int main(){
    int user,sum =1;
    printf("enter your value");
    scanf("%d",user);

    for (int start = 1; start <= user; start++)
    {
       sum =sum*start;
    }
  printf("%d",sum);   
}