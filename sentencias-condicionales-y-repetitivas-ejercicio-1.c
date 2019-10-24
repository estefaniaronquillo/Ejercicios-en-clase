/******************************************************************************

1. En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de acuerdo con el 
monto de su compra. El criterio para establecer el descuento se muestra abajo. Construye el correspondiente 
programa en C que, al recibir como dato el monto de la compra del cliente, obtenga el precio real que debe pagar 
luego de aplicar el descuento correspondiente.

Compra < $800 ⇒ Descuento 0%.                               mayor o igual a 800
$800  Compra  $1500 ⇒ Descuento 10%.                        mayor o igual a 1500
$1500 < Compra  $5000 ⇒ Descuento 15%.                      mayor o igual a  5000
5000 < Compra ⇒ Descuento 20%. *deberia ser mayor          

nomenclatura
vc= valor de compra
d= descuento
vd= valor de descuento
vr= valor real (incluido descuento)
*******************************************************************************/
#include <stdio.h>

void main()
{
    float vc, d,vd=0,vr=0;// se asignan las variables
    printf("Tienda xyz\nIngresa Valor de compra:\t");// pedir ingresar valor de compra
    scanf("%f",&vc);// se obtiene valor de compra
    
    // se procede a verificar valor de compra y asignar el descuento
    if(vc<=800)
        d=0;
        else if(vc>5000)
            d=0.20;
            else if(vc<=5000 && vc>1500)
                d=0.15;
                else if(vc<=1500 && vc>800)
                d=0.10;
    vd= vc*d;   //se calcula descuento
    vr=vc-vd;   // se calcula valor a pagar
    // se imprime resultados
    printf("Valor de compra sin descuento:\t\t%.2f\n",vc);
    printf("Decuento\t\t\t\t%.2f\n",d*100);
    printf("Valor de descuento\t\t\t%.2f\n",vd);
    printf("Valor a pagar \t\t\t\t%.2f\n",vr);
    
}
