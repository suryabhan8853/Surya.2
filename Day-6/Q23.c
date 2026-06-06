#include<stdio.h>
int main(){
    int binary,remainder,count = 0;
    printf("Enter a binary number : ");
    scanf("%d",&binary);
    while(binary != 0){
      remainder = binary % 10;
      if (remainder == 1){
         count++;
      }
      binary /=10;
      }
      //Set bits is number of 1s in binary
      printf("Set bits = %d",count);
      return 0;
    
}