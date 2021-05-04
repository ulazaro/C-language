
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multi, div;
    printf("Calculadora 1.0\n");
    printf("Somente dois numeros serao processados por vez!\n");
    printf("Entre com o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Entre com o segundo Numero:\n");
    scanf("%d", &num2);

    soma        = num1 + num2;
    subtracao   = num1 - num2;
    multi       = num1 * num2;
    div         = num1 / num2;

    printf("//////// Resultados: ////////\n");


    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("O produto e: %d \n", multi);
    printf("a divisao e: %d \n", div);

    return 0;
}