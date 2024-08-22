#include<stdio.h>
int main(){

    int a,b;

    printf("enter the first value : ");
    scanf("%d",&a);
    printf("enter the second value : ");
    scanf("%d",&b);

    if( a < b ){
        printf("meximum value : %d",a);
    }
    else{
        printf("minimum value : %d",b);
    }
}