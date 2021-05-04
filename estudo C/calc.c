#include <stdlib.h>
#include <stdio.h>

int main () {

    int numero1, numero2, soma, sub, mult, div  ;

    printf ("Calculadora Laza1 2021 \n");
    printf ("um numero de cada vez \n");
    printf ("Digite um numero: \n");
    scanf ("%d" , &numero1) ;
    printf ("Digite outro numero:\n") ;
    scanf ("%d" , &numero2) ;

    soma   = numero1 + numero2 ;
    sub    = numero1 - numero2 ;
    mult   = numero1 * numero2 ;
    div    = numero1 / numero2 ;


    printf ("O resultado da soma e: %d\n", soma  ) ;
    printf ("O resultado da subtracao e:  %d\n", sub) ;
    printf ("O resultado da multiplicacao e:  %d\n" ,mult) ;
    printf (" O resultado da divisao e:  %d\n", div);

    return 0 ;
}