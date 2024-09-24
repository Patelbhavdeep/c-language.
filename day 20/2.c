#include<stdio.h>
int bhuro(){
   int  bhuri;

   printf("enter your value = ");
   scanf("%d",&bhuri);
   if (bhuri % 3 == 0  && bhuri % 5 == 0)
   {
      printf("------your value is true------\n");
   }
   else{
    printf("------your vlaue is false ------\n");
   }


}
int main(){
   for (int  i = 1; i <= 10; i++)
   {
    bhuro();
   }
   
}