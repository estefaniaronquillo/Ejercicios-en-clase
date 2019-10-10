/******************************************************************************

Columna2.- Se desea calcular el salario neto semanal de un trabajador en
función del número de horas trabajadas y la tasa de impuestos:
Las primeras 35 horas de pagan a tarifa normal.
Las horas que pasen de 35 se pagan a 1.5 veces la tarifa normal
Las tasas de impuestos son:
1. Los primeros 1000 dólares son libres de impuestos.
2. Los siguientes 500 dólares tienen un 25% de impuestos.
3. Los restantes, un 45% de impuestos.
La tarifa horaria es de 40 dólares
Se desea escribir el SALARIO BRUTO(salario antes de impuesto), TASAS DE
IMPUESTOS , Y SALARIO NETO(salario después de impuestos).

*******************************************************************************/
#include <stdio.h>

void main()
{
    int horas, tarifa_horaria=40;
    float sal_bruto=0, sal_bruto1=0, impuesto=0, sal_neto=0, tarifa_35;
    
    tarifa_35=tarifa_horaria*1.5;
    
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas);
    if(horas<=35)
        sal_bruto=horas*tarifa_horaria;
    else
        sal_bruto=horas*tarifa_35;
    
    if(sal_bruto<=1000){
        impuesto = 0;
        sal_neto=sal_bruto;
    }
    else if(sal_bruto>1000 && sal_bruto<=1500){
        sal_bruto1=sal_bruto-1000;
        impuesto=sal_bruto1*0.25;
        sal_neto=sal_bruto-impuesto;
    }
    else if(sal_bruto>1500){
        sal_bruto1=sal_bruto-1500;
        impuesto=sal_bruto1*0.45;
        impuesto=impuesto+125;        //fijos por 1001-1500
        sal_neto=sal_bruto-impuesto;
    }
    
    printf("El salario bruto es %.2f\n", sal_bruto);
    printf("Su tasa de impuesto es de %.2f\n", impuesto);
    printf("El salario neto es %.2f\n", sal_neto);
    
}
