#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0)
        printf("Fibonacci number = 0");
    else if(n == 1)
        printf("Fibonacci number = 1");
    else {
        for(i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci number = %d", c);
    }

    return 0;
}
