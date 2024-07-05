#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3];
    for (int i= 0; i < 3; i++) {
    scanf("%d", &array[i]);
    }
    int min = array[0];
    for (int i = 0; i < 3; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("%d ", min);
}
