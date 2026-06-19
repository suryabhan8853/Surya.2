#include<stdio.h>
int main(){
    int a[10][10],b[10][10],i,j,m,n;
    printf("Enter dimension of matrix : ");
    scanf("%d %d",&m,&n);
    printf("Enter matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        b[j][i] = a[i][j];
        }
    }
    printf("Transpose of Matrix is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}