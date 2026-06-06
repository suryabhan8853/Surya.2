#include<stdio.h>
int main() {
    int n,i,a[16];
   printf("Enter a number is : ");
   scanf("%d",&n);
   i=0;
   while (n>0){
    a[i]=n%2;
    n/=2;
    i++;
   }
   printf("Binary is : ");
   for(i=i-1;i>=0;i--){
    printf("%d",a[i]);
   }
   return 0;
   }