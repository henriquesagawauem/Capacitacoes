#include <stdio.h>
#include "exercicio-14-aula.h"

int main()
{
    float inicio1, fim1, inicio2, fim2;
    int eh_loop = 0;

    while (eh_loop == 0)
    {
        printf("Digite o inicio primeiro horário\nHorário: \n");
        scanf("%f", &inicio1);

        printf("Digite o fim do primeiro horário\nHorário: \n");
        scanf("%f", &fim1);

        if (verifica(inicio1, fim1) == 1)
        {
            printf("Horário inválido porra! Digita de novo seu merdinha\n");
        }
        else
        {
            break;
        }
    }

    while (eh_loop == 0)
    {

        printf("Digite o inicio do segundo horário\nHorário: \n");
        scanf("%f", &inicio2);

        printf("Digite o fim do segundo horário\nHorário: \n");
        scanf("%f", &fim2);

        if (verifica(inicio2, fim2) == 1)
        {
            printf("Horário inválido porra! Digita de novo seu merdinha\n");
        }
        else
        {
            break;
        }
    }

    int conflito = aulasConflitam(inicio1, fim1, inicio2, fim2);

    imprimeResultado(conflito);
    return 0;
}