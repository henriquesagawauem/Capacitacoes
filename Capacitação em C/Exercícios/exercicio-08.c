#include <stdio.h>

int main() {
    int escolha;
    float numero1, numero2;

    printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\nEscolha: ");
    scanf("%d", &escolha);

    printf("Digite o numero 1\n");
    scanf("%f", &numero1);

    printf("Digite o número 2\n");
    scanf("%f", &numero2);

    switch (escolha)
    {
    case 1:
        printf("Somando %f com %f\n", numero1, numero2);
        printf("%f\n", numero1 + numero2);
        break;
    case 2:
        printf("Subtraindo %f com %f\n", numero1, numero2);
        printf("%f\n", numero1 - numero2);
        break;
    case 3:
        printf("Multiplicando %f com %f\n", numero1, numero2);
        printf("%f\n", numero1 * numero2);
        break;
    case 4:
        if (numero2 == 0) {
            printf("Não existe divisão por 0 seu animal\n");
            break;
        }

        printf("Dividindo %f por %f\n", numero1, numero2);
        printf("%f\n", numero1 / numero2);
        break;
    
    default:
        printf("Digita uma opção válida caralho\n");
        break;
    }

    return 0;
}