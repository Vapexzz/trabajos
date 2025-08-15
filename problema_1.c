#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("N: ");
    scanf("%d", &n);
    for(i = 0, 1 < n; n; i++){
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}