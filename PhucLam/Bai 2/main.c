#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int n;
    int m = n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
            printf(" ");
        for (int j = i ;j < n; j++){
            printf("  ");
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            printf("%d ", j);
            }
            printf("\n");
        }
    return 0;
}

