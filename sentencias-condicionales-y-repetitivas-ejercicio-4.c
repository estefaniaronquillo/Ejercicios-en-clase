/******************************************************************************

4. Los organizadores de un acto electoral solicitaron realizar un programa de cómputo para manejar el conteo de los votos.
En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos de 1 a 5. 
Construye un programa en C que permita obtener el número de votos de cada  candidato y el porcentaje que obtuvo respecto al
total de los votantes. El usuario ingresa los votos de manera desorganizada, tal y como se obtienen en una elección, 
el final de datos se representa por un cero. Observa como ejemplo la siguiente lista: (SENTENCIA DO-WHILE)

2 5 5 4 3 4 4 5 1 2 4 3 1 2 4 5 0

Donde: 1 representa un voto para el candidato 1, 3 un voto para el candidato 3, y así sucesivamente.
Datos: VOT1, VOT2,..., 0 (variable de tipo entero que representa el voto a un candidato).

nomenclatura
v# = voto a candidato #
p# = participacion de candidato #
sv = suma de votos
v= voto
*******************************************************************************/
#include <stdio.h>

void main()
{
    int v,v1=0,v2=0,v3=0,v4=0,v5=0,sv=0;                // declaro variables
    do{                                                 //empiesa repeticion
        printf("ingrese numero de candidato:\t");
        scanf("%d",&v);                                 // elije candidato
        if(v>0&&v<6){                                   //compara si numero de candidato esta bien
            switch(v){                                  // suma votos a candidatos
                case 1: v1++;
                break;
                case 2: v2++;
                break;
                case 3: v3++;
                break;
                case 4: v4++;
                break;
                case 5: v5++;
                break;
            }
            printf("su voto ha sido guardado\n");
            sv++;                                       //suma votantes
        }
        else if(v==0){                                  //imprime resultados y porcentajes
            printf("total de votantes:\t %d\n",sv);
            printf("El candidato 1 obtuvo %d\tvotos con un %.2f de participacion \n",v1,(float)v1/(float)sv);
            printf("El candidato 2 obtuvo %d\tvotos con un %.2f de participacion \n",v2,(float)v2/(float)sv);
            printf("El candidato 2 obtuvo %d\tvotos con un %.2f de participacion \n",v2,(float)v3/(float)sv);
            printf("El candidato 2 obtuvo %d\tvotos con un %.2f de participacion \n",v2,(float)v4/(float)sv);
            printf("El candidato 2 obtuvo %d\tvotos con un %.2f de participacion \n",v2,(float)v5/(float)sv);
        }
        else                                            //anula voto
        printf("Este numero no es de un candidato su voto se anula\n");
    }while(v!=0);

    
}

