#include<stdio.h>
int main() {
    int a[100],x,n,i,flag = 0;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
     }
     printf("Enter element to be search");
     scanf("%d",&x);
     for(i=0;i<n;i++){
        if(a[i]==x){
            flag = 1;
            break;
        }
     }
     if(flag == 1)
     printf("Element found at %d the position",i+1);
     else
     printf("Unsuccessful search");
     return 0;
}