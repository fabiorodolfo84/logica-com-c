/*
ELABORAR UM PROGRAMA QUE LEIA DOIS NUMEROS.
CALCULE E INFORME A SOMA DESSES NUMEROS...
*/


#include <stdio.h>

int main() {
     float valorJantar, taxaGarcom, totalPagar;
     printf("Valor do Jantar R$: ");
     scanf("%f", &valorJantar);

     taxaGarcom = valorJantar * 0.1; // taxa de 10%
     totalPagar = valorJantar + taxaGarcom;

     printf("Taxa do garçom R$: %.2f\n", taxaGarcom);
     printf("Total a Pagar R$: %.2f\n", totalPagar);

     return 0;
}


