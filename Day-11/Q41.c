#include<stdio.h>
    int sum(int,int);
    int main() {
    int a,b,result;
    printf("Enter number of a : ");
    scanf("%d",&a);
    printf("Enter number of b : ");
    scanf("%d",&b);
    result=sum(a,b);
    printf("Sum of a and b is = %d",result);
    return 0;
}
    int sum(int x,int y){
    int z;
    z = x+y;
    return (z);
}