#include<stdio.h>
int main() {
    int n,a[50],i;
    printf("Enter number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Element of Array is : ");
    for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }
    return 0;
}