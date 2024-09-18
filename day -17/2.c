#include<stdio.h>

int main(){

    int size;
    float sum;
    printf("Enter value : ");
    scanf("%d",&size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter  your value : ");
        scanf("%d",&a[i]);
    }
    for (int  i = 0; i < size; i++)
    {
        sum+=a[i];
    }
    
    printf("--------------\n");
    printf("Average of an Array: %f",sum/size);
 
 }