#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    gets(text);
    char checknot[11]= "AaEeIiOoUu";
    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        for (int j = 0; j < strlen(checknot); j++) {
            if (text[i] == checknot[j]) {
                count++;
            }
        }
    }
    int result = strlen(text) - count;
    printf("%d", result);
    return 0;
}
