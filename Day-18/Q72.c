#include<stdio.h>
int main(){
    int a[50],n,i,j,temp;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter list of element to be sorted\n");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j+1]>a[j]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
    printf("Sorted array is ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}