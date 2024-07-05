#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    gets(text);
    char check[3] = "Aa";
    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        for (int j = 0; j < strlen(check); j++) {
            if (text[i] == check[j]) {
                count++;
            }
        }
    }

    printf("OUTPUT:\n%d ", count);
    return 0;
}
