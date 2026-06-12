#include<stdio.h>
void perfect(int);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
  void perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
       if(n % i == 0)
        sum = sum + i;
    }
    if(sum == n)
    printf("Perfect number");
    else
    printf("Not Perfect number");
  }
 