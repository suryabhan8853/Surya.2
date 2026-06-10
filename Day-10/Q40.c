#include<stdio.h>
int main() {
    int n;
    printf("Number of row: ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j=1;j<=n-i;j++){
        printf(" ");
        }
        for(int j = 1;j <= i;j++){
        printf("%c",64+j);
        }
        int a = i - 1;
        for(int k=1;k<=i-1;k++){
        printf("%c",64+a);
        a--;
        }
            printf("\n");
    }
    return 0;
}