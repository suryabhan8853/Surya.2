#include<stdio.h>
int main(){
    int n,i,a[50],larg,smal;
    printf("Enter number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
     larg = a[0];
     smal = a[0];
      for(i=1;i<n;i++){
        if(a[i] > larg)
        larg = a[i];
        if(a[i] < smal)
        smal = a[i];   
      }
    printf("Largest element is %d\n",larg);
    printf("Smallest element is %d",smal);
    return 0;
}