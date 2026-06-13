#include<stdio.h>
int main() {
    int n,i,a[50],sum=0;
    float avg;
    printf("Enter number of element is : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         sum = sum + a[i];
    }
    avg = (float)sum/n;
    printf("sum of array is %d\n",sum);
    printf("Average of array is %f",avg);
    return 0;
}