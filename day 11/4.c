#include<stdio.h>

int main(){

    int start =2, end;
    printf("enter your value");
    scanf("%d",&end);
    
    do
    {
        if (start % 2 == 0)
        
        {
            printf("%d",start);
           
        }
         start++;
    } while (start <= end);
    
    
    
}