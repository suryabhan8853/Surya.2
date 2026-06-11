#include<stdio.h>
int max(int,int);
int main(){
   int a,b,result;
   printf("Enter number a is : ");
   scanf("%d",&a);
   printf("Enter number b is : ");
   scanf("%d",&b);
   result=max(a,b);
   printf("Maximum number is %d",result);
   return 0;
}
   int max(int x,int y){
    if(x>y)
     return (x);
     else
     return (y);
   }