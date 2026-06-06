#include<stdio.h>
#include<math.h>
int main(){
    int i=0,binary,decimal=0,remainder;
    printf("Enter a binary is : ");
    scanf("%d",&binary);
    while(binary != 0){
        remainder=binary % 10;
        decimal += remainder*pow(2,i);
        binary /=10;
        i++;
    }
    printf("Decimal equivalent : %d",decimal);
    return 0;
    
}