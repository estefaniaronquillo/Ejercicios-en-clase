/******************************************************************************

2.Construye el respectivo programa en C que, al recibir como datos tres variables reales que representan 
los lados de un probable triángulo, determine si esos lados corresponden a un triángulo. En caso de serlo,
además de escribir el área correspondiente compruebe si el mismo es equilátero, isósceles o escaleno.
Datos: L1, L2 y L3 (variables de tipo real que representan los posibles lados de un triángulo).
Consideraciones:
• Si se cumple la propiedad de que la suma de los dos lados menores es menor a la del lado restante, es un triángulo.
• El área se obtiene aplicando la siguiente fórmula: (formula de heron)


ojo correcion *****la longitud de cada lado tiene que ser menor que la suma de los otros dos lados 
                    para que se un triangulo******* 

        nomenclatura 
        
        l1=lado 1
        l2=lado 2
        l3=lado 3
        s= semiperimetro
        a=area
*******************************************************************************/
#include <stdio.h>
#include <math.h> // incluir math para raiz cuadrada

void main()
{
    float l1,l2,l3,s=0,a=0;// declarar variables
    // ingrese los lados
    printf("Ingrese los lados del triangulo\n");
    printf("Lado 1:\t");
    scanf("%f",&l1);
    printf("Lado 2:\t");
    scanf("%f",&l2);
    printf("Lado 3:\t");
    scanf("%f",&l3);
    //comprobar si es triangulo
    if(l1<(l2+l3)&&l2<(l1+l3)&&l3<(l1+l2)){
    
        //comprobar que tipo de triangulo es
        if(l1==l2&&l1==l3)
            printf("Es un triangulo Equilatero\n");
            else if (l1!=l2&&l1!=l3&&l2!=l3)
            printf("Es un triangulo Escaleno\n");
            else
            printf("Es un triangulo Isoseles\n");
        //calcular area
        s=(l1+l2+l3)/2;
        a=sqrt(s*(s-l1)*(s-l2)*(s-l3));
        // imprimir area
        printf("El area del triangulo es:\t %.2f",a);
    }
    else
    printf("Los datos proporcionados no corresponden a un triangulo");
}

