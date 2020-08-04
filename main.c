#include <stdio.h>

int main() {
    int a = 10;
    while (a >8 || a < 1) {
        printf("Enter Height: ");
        scanf("%*[^0-9]%d", &a);

    }
    for (int i = a; i > -0; --i) {

        printf("%*s", i, "#");
        for (int j = i; j < a; ++j) {
            printf("#");
        }
        printf("\n");
    }


    for (int i = 0; i < a; ++i) {

        printf("%s", "#");
        for (int j = i; j < a-1; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
