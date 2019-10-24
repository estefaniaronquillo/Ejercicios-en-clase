/*

5. A la clase de Estructuras de Datos del profesor López asiste un grupo numeroso de alumnos.
Construye un programa en C que  imprima la matrícula y el promedio de las cinco calificaciones 
de cada alumno. Además, debe obtener la matrícula y el promedio tanto del mejor como del peor alumno. (SENTENCIA FOR)

Datos: MAT1, CAL1,1, CAL1,2, CAL1,3, CAL1,4, CAL1,5
MAT2, CAL2,1, CAL2,2, CAL2,3, CAL2,4, CAL2,5
. . .
0

Donde: MATi es una variable de tipo entero que representa la matrícula del alumno i. El fin de datos está dado por 0.
CALi,j es una variable de tipo real que representa la calificación j del alumno i.

nomenclatura

ne=estudiante

n=nota
ce=0

*******************************************************************************

cal=calificaciones
c = contador
r = repetir
s= suma calificacion
cala=alta calificaciones
calb= baja calificacion

*/

#include <stdio.h>

void main()
{
    int cal,c,r,cala=0,calb=10,s=0;
    char alumno[10];
    do{                                                     // empieza loop de estudiante
        printf("ingrese nombre del alumno \t");
        scanf("%s",&alumno);                                //se pide nombre de estudiante
        for(c=1;c<=5;c++){                                  //empiesa loop para calificaciones de estudiante
            printf("ingrese nota %d del estudiante:\t",c);
            scanf("%d",&cal);                               //se pide notas
            if(cal>cala)                                    //se compara nota mayor
                cala=cal;
            if(cal<calb)                                    //se compara nota menor
                calb=cal;
            s=s+cal;                                        // se suman las notas
        }
        printf("el alumno %s tiene:\n",alumno);             // se imprimen resultados
        printf("mejor nota: %d\n",cala);
        printf("Peor nota: %d\n",calb);
        printf("promedio: %.2f\n",(float)s/5);
        s=0;                                                //variables buelven a inicio
        cala=0;
        calb=10;
        printf("si quiere promediar otro alumno precione cualquier numero,caso contrario precione 0\n");
        scanf("%d",&r);                                     //se pregunta si se evalua a otro estudiante
    }while(r!=0);
}