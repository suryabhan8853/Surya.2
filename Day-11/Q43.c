#include<stdio.h>
void prime(int);
int main() {
    int n;
    printf("Enter number is : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
    void prime(int x){
        int i,flag=0;
        for(i=2;i<x;i++){
            if(x%i==0){
              flag = 1;
              break;
            }
    }
    if(x <= 1)
       printf("Number is not prime");
    else if(flag == 1)
        printf("Number is not prime");
        else
        printf("Number is prime");
        }