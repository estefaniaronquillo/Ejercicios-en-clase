/******************************************************************************

Realizar un programa que permita convertir de grados centigrados a fahrenheit
o viceversa
*******************************************************************************/
#include <stdio.h>

void main()
{
   float cent, fahr, gradosCent=0, gradosFahr=0;
   int op;
   printf("Menú principal\n1. Grados centígrados a farenheit\n2. Grados fahrenheit a centigrados\n");
   printf("Escoja una opción: ");
   scanf("%d", &op);
   if(op==1)
   {
        printf("Ingrese los grados centgrados: ");
        scanf("%f", &cent);
        gradosFahr=(cent*(9/5))+32;
        printf("Grados fahrenheit: %.2f", gradosFahr);
   }
   else
   {
        printf("Ingrese los grados fahrenheit: ");
        scanf("%f", &fahr);
        gradosCent=(fahr-32)*(5/9);
        printf("Grados centigrados: %.2f\n", gradosCent);
   }
}


