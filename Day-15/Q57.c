#include<stdio.h>
int main(){
    int i,n,a[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Array element is : ");
    for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
    printf("Reverse array is : ");
    for(i = n - 1;i >= 0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}