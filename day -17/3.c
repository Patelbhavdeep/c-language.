#include<stdio.h>

int main(){

    int size;
  
    printf("Enter first value : ");
    scanf("%d",&size);
    int b[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter  your value  b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    
    printf("Enter second value : ");
    scanf("%d",&size);
    int m[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter  your value  m[%d]: ",i);
        scanf("%d",&m[i]);
    }
    printf("\n");
     int v[size];
     for (int i = 0; i < size; i++)
     {
       v[i]=b[i]+m[i];
       printf("total  Array  is : %d\n",v[i]);
     }
     

 }