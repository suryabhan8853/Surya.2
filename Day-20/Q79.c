#include<stdio.h>
int main(){
    int a[10][10],b[10][10],m,n,i,j;
    printf("Enter dimension of matrix is : ");
    scanf("%d %d",&m,&n);
    printf("Enter matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        int sum = 0;
        for(j=0;j<n;j++){
          sum = sum + a[i][j];
        }
        printf("Sum of %d row = %d\n",i+1,sum);
    }
    return 0;
}