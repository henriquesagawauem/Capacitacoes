#include <stdio.h>

int main()
{
    int escolha;
    int eh_loop = 0;
    float numero1, numero2;

    while (eh_loop == 0)
    {
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\nEscolha: ");
        scanf("%d", &escolha);

        if (escolha == 0){
            printf("Vai tomar no c#\n");
            eh_loop == 1;
            break;
        }

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
            if (numero2 == 0)
            {
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
    }

    return 0;
}