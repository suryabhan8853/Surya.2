#include<stdio.h>
int main(){
    int a[10][10],m,n,i,j,flag = 1;
    printf("Enter dimension of matrix is : ");
    scanf("%d %d",&m,&n);
    if(m != n){
        printf("Not Symmetric matrix");
        return 0;
    }
    printf("Enter matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++){
     for(j=0;j<n;j++){
       if(a[i][j] != a[j][i]){
       flag = 0;
       break;
       }
    }
}
    if(flag == 1)
    printf("Symmetric matrix ");
    else
    printf("Not Symmetric matrix ");
    return 0;
}