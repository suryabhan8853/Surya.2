#include<stdio.h>
int main() {
    int n,a,temp,fact,sum = 0;
    printf("Enter a number is : ");
    scanf("%d",&n);
    temp = n;
    while(n > 0){
        a = n % 10;
        fact = 1;
       for(int i=1;i<=a;i++){
        fact = fact * i;
       }
       sum = sum + fact;
       n = n / 10;
      }
      if(sum == temp)
      printf("Strong number");
      else
      printf("Not Strong number");
      return 0;
    }