#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }

    printf("Do dai cua mang la: %d\n", length);

    return 0;
}
