#include<stdio.h>
int main(){

   
    int b,m,w;

    printf("first side = ");
    scanf("%d",&b);

    printf("second side = ");
    scanf("%d",&m);

    w = 180 - (b+m);
    printf("third side : %d",w);


}