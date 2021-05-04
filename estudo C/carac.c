#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

  int i = 10;
  printf("Tomada de decisao\n") ;

// --> 0 imprime falso
// --> 1 imprime verdadeiro
// ! significa negação 

if ( i >= 5) {
    printf ("TRUE") ;
}

else {
    printf("False");
}

}