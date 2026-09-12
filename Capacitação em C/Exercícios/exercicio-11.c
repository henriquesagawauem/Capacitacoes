#include <stdio.h>

void f() {
    int y = 5;
    printf("%d\n", y);
}

int main() {
    int y = 10;
    f();
    printf("%d\n", y);
    return 0;
}

// Retorna:
// 5
// 10