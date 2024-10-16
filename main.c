#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int numeroDiElementi = 0;
    float numeroInserito = 0.0;
    float sommaNumeri = 0;

    printf("Inserisci il numero di elementi da sommare\n");
    scanf("%d", &numeroDiElementi);
    printf("\n");

    for (i = 0; i < numeroDiElementi; i++)
    {
        printf("Inserisci il %d° numero da sommare\n", i);
        scanf("%f", &numeroInserito);
        sommaNumeri = sommaNumeri + fabs(numeroInserito);
    }

    printf("La somma dei numeri e %.2f", sommaNumeri);

    return 0;
}
