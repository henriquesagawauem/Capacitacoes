#include <stdio.h>

int main() {
    char nome[25];

    printf("Digite seu nome: ");
    fgets(nome, 25, stdin);

    printf("Olá, %s", nome);

    return 0;
}