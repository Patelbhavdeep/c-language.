#include<stdio.h>

int calu(){
    printf("press 1 for  +\n");
    printf("press 2 for  -\n");
    printf("press 3 for  *\n");
    printf("press 4 for  /\n");
    printf("press 5 for  |\n");

    int user,a ,b;
    printf("Enter your like number");
    scanf("%d",&user);

    printf("Enter first number ");
    scanf("%d",&a);

    printf("Enter  second number ");
    scanf("%d",&b);

    switch (user)
    {
    case 1:
       printf("sum = %d",(a+b));
        break;
    case 2:
       printf("subtra = %d",(a-b));
        break;
    case 3:
       printf("multi = %d",(a*b));
        break;
    case 4:
       printf("divided = %d",(a/b));
        break;
    case 5:
       printf("mode = %d",(a|b));
        break;
    
    default:
      printf("invalid number");
        break;
    }
}
int main(){
    calu();
}