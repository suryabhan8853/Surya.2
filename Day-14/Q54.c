#include<stdio.h>
int main(){
    int a[100],n,i,x,count = 0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to find frequency : ");
    scanf("%d",&x);
    for(i = 0;i < n;i++){
        if(a[i] == x){
            count++;
        }
    }
    printf("Frequency of %d = %d",x,count);
    return 0;
}