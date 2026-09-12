#include <stdio.h>

int verifica(float inicio, float fim)
{
    if (inicio < 7 || fim > 19 || inicio > 19 || fim < 7 || inicio >= fim)
    {
        return 1;
    }

    return 0;
}

int aulasConflitam(float inicio1, float fim1, float inicio2, float fim2)
{
    if ((inicio1 >= inicio2 && inicio1 <= fim2) || (fim1 >= inicio2 && fim1 <= fim2))
    {
        return 1;
    }

    return 0;
}

void imprimeResultado(int conflito)
{
    if (conflito == 1)
    {
        printf("Há conflito\n");
    }
    else
    {
        printf("Não há conflito\n");
    }
}

