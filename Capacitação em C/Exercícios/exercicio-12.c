#include <stdio.h>

int z = 1;

void altera() {
    z = 10;
}

int main() {
    printf("%d\n", z);
    altera();
    printf("%d\n", z);

    return 0;
}