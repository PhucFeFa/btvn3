#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    gets(text);
    int DeleteSpace = 0;
    for (int i = 0; i < strlen(text); i++) {
        if (((int)text[i] == 32 && DeleteSpace == 0) || ((int)text[i]>=65 && (int)text[i] <=90) || ((int)text[i] >= 97 && (int)text[i] <= 122)) {
            printf("%c", text[i]);
            DeleteSpace = 0;
        }
    if ((int)text[i] == 32) DeleteSpace = 1;
    }
    return 0;
}
