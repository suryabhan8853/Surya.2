#include<stdio.h>
int main(){
    int i,n,a[50],j=0;
    printf("Enter number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i] != 0){
            a[j]=a[i];
            j++;
        }
    }
    while(j<n){
        a[j] = 0;
        j++;
    }
    
    printf("Move array is : ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}