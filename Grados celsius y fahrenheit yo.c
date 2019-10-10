/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int opcion =0; 
    
    printf("Ingrese el tipo de grado que desee cambiar, centigrados (1) o fahrenheit (2): ");
    scanf("%d", &opcion);
    if (opcion == 1)
    {
        printf("Valor para cambiar de grados centígrados a fahrenheit: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * 1.8 + 32;
        printf("%.2f equivale a %.2f en fahrenheit", celsius, fahrenheit);
    }
    else if (opcion == 2)
    {
        printf("Valor para cambiar de grados fahrenheit a centígrados: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
        printf("%.2f equivale a %.2f en centígrados", fahrenheit, celsius);
    } else {
        printf("Valor ingresado incorrecto. Vuelva a entrar al sistema.");
    }
}



