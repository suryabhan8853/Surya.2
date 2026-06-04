#include<stdio.h>
int main() {
    int num,original,sum = 0,r;
    printf("Enter the number ");
    scanf("%d",&num);
    original = num;
    while (original > 0) {
    r = original % 10;           //get last digit
    sum = sum + r * r * r;  // cube and add 
    original = original / 10;    //remove last digit
    }
    if(sum == num) {
        printf ("number is Armstrong");
    } 
    else{
        printf("number is not Armstrong");
    }

      
      return 0;

}