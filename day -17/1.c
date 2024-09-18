#include<stdio.h>

int main(){

    int size;
    printf("Enter value : ");
    scanf("%d",&size);
    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter  your value : ");
        scanf("%d",&box[i]);
    }
    printf("----------------------\n");
 
    printf("Length of an Array:: %d\n",size);

 
 }