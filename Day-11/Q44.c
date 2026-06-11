#include<stdio.h>
int factorial(int);
int main() {
    int result,n;
    printf("Enter number is : ");
    scanf("%d",&n);
    if(n<0)
     printf("factorial of negative number is not define");
    else{
    result = factorial(n);
    printf("factorial of number is %d",result);
    }
    return 0;
}
  int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact * i;
      }
     return (fact);
  }