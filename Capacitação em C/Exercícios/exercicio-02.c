#include <stdio.h>

int eh_pronto = 0;
int valor_guardado;


void marcar_pronto() {
    eh_pronto = 1;
}

void guardar(int valor) {
    valor_guardado = valor;
}

int main() {
    marcar_pronto();


    guardar(3);

    printf("%d \n", eh_pronto);
    printf("%d \n", valor_guardado);


    return 0;
}