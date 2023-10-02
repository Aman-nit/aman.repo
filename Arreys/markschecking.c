#include <stdio.h>

int main() {
    int arr[10];

    for (int j = 0; j < 10; j++) {
        printf("Roll number %d enter your mask: ", j + 1);
        scanf("%d", &arr[j]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 35) {
            printf("Roll number %d has marks below 35: %d\n", i + 1, arr[i]);
        }
    }

    return 0;
}
