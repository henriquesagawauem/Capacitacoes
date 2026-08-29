#include <stdio.h>

int main() {
                float preco;

                printf("Digite o preço do produto: ");
                scanf("%f", &preco);

                float  final = preco * 0.9;

                printf("Preço com desconto %.2f\n", final);
                return 0;
}