#include<stdio.h>
void Fibonaaci(int);
int main() {
  int n;
  printf("Enter number of term is : ");
  scanf("%d",&n);
   Fibonaaci(n);
   return 0;
}
 void Fibonaaci(int n){
   int a=0,b=1,c;
   printf("Fibonaaci series is ");
   for(int i = 1;i<=n;i++){
      printf("%d ",a);
      c = a+b;
      a = b;
      b = c;
    }
   }
   
 