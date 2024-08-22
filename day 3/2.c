#include<stdio.h>

int main(){

    int b;

    printf("enter the value : ");
    scanf("%d",&b);

    if ( b < 0)
    {
        printf("negative number : %d",b);
    }
    else if ( b > 0)
    {
        printf("positive number : %d",b);
    }
    else{
        printf("Neutral number : %d",b);
    
    }
}