#include<stdio.h>
int main(){
    int b,m,w;
    float ans;

    printf("enter sub mark 'maths' : ");
    scanf("%d",&b);
    printf("enter sub mark 'english' : ");
    scanf("%d",&m);
    printf("enter sub mark 'science' : ");
    scanf("%d",&w);



    if (b < 0 || m < 0 || w < 0 || b > 100 || m > 100 || qwq > 100)
    {
        printf("marks is wrong");
    }
    else{
            ans=(b+m+w)/3;
        printf("%d+%d+%d/3 = %f",b,m,w,ans);
    }
}