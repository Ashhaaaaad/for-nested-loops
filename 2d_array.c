#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        printf("%4d:  ", i);
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
