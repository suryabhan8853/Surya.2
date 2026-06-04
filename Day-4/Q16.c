#include<stdio.h>
int main() {
    int num,original,sum = 0,r;
    printf("Armstrong numbers between 1 to 500 are:\n");
    for(num = 1;num <= 500;num++) {
    original = num;
    sum = 0;
    while (original > 0) {
    r = original % 10;           //get last digit
    sum = sum + r * r * r;  // cube and add 
    original = original / 10;    //remove last digit
    }
    if(sum == num) {
        printf ("%d ",num);
    } 

      }
      return 0;

}