#include<stdio.h>

int main(){
    int start,end;

    printf("enter the value");
    scanf("%d\n",&start);
    printf("enter the value");
    scanf("%d\n",&end);

    while (start <= end )
    {
        if (start%4==0)
        {
          printf("%d\n",start);

        }
        start++;
        
    }
    
}