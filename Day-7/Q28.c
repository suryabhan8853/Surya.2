#include<stdio.h>
int reverse(int);
int main() {
  int num,rev;
  printf("Enter number : ");
  scanf("%d",&num);
  rev = reverse(num);
  printf("Reverse of number is %d",rev);
  return 0;
}

int reverse(int n){
    int rev=0;
while (n != 0){
    rev = rev*10+n % 10;
    n = n/10;
}
return rev;
}