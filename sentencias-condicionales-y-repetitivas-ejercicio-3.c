/******************************************************************************

3. Escribe un programa en C que obtenga y escriba tanto los términos como la suma de los términos 
de la siguiente serie: (SENTENCIA WHILE)

2, 7, 10, 15, 18, 23, . . ., 2500

Donde: I es una variable de tipo entero que se utiliza para incrementar el valor de los términos de la serie.
SSE es una variable de tipo entero que se utiliza para sumar los términos.
CAM es una variable de tipo entero que se utiliza para distinguir el valor a sumar.

nomenclatura 

i=incremento
sse=suma
cam= distingue que valor sumar
*******************************************************************************/
#include <stdio.h>

void main()
{
    int i=1,sse=2,cam=0;// se declaran variable
    printf("orden de serie  \t # de serie\n");//se ponen titulos
    // se condiciona e imprime la serie  
    while(sse<25000){
        printf("        %d      \t\t      %d   \n",i,sse);
        cam=i%2;
        if(cam==1)
            {sse=sse+5;}
        else
            {sse=sse+3;}
        i++;
    }

    
}
