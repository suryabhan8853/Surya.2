#include<stdio.h>
int main(){
    int i,n,a[50],even = 0,odd = 0;
    printf("Enter number of element is : ");
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
     for(i = 0;i < n;i++){
        if(a[i] % 2 == 0)
         even++;
         else
         odd++;
      }
      printf("Number of even element is %d\n",even);
      printf("Number of odd element is %d",odd);
     return 0;
}