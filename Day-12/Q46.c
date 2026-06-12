#include<stdio.h>
void Armstrong(int);
int main() {
    int n;
    printf("Enter number is : ");
    scanf("%d",&n);
    Armstrong(n);
    return 0;
}
  void Armstrong(int n){
    int a,r,d = 0;
    a = n;
    while (n>0) {
       r = n % 10;
       d = d + r * r * r;
       n = n / 10;
    }
    if(d == a)
     printf("Number is Armstrong");
    else
    printf("Number is not Armstrong");
    }