#include<stdio.h>
void palindrome(int);
int main(){
   int n;
   printf("Enter number is : ");
   scanf("%d",&n);
   palindrome(n);
    return 0;
}
     void palindrome(int n){
        int a,r,d = 0;
        a = n;
        while (n>0){
        r = n % 10;
        d = d * 10 + r;
        n = n / 10;
        }
        if(d == a)
           printf("Number is palindrome");
         else
           printf("Number is not palindrome");
           }