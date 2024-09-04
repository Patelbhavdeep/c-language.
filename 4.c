#include<stdio.h>

int main(){
    int start;

    printf("enter any value");
    scanf("%d\n",&start);

    while (start > 0)
    {
        if (start%2 !=0)
        {
            printf("%d",start);
        }
        start--;
        printf("\n");
    }
    
}