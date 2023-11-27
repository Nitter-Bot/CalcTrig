#include <stdio.h>
#include "funciones.h"

int main()
{
    double sen0, sen1, n1, aux, z, rad, x;
    int n;
    printf("Ingrese el angulo: ");//Se pide angulo
    scanf("%lf", &x);
    rad = convrad(x);//Se convierte angulo a radianes
    sen1 = 0;
    sen0 = 1;
    n = 1;
    while(sen0 > 0.0000000001 || sen0 < -0.0000000001)//while que genera la serie
    {
        n1 = factorial(n);
        sen0 = potencia(rad, n)/n1;
        if(n%4 == 1)
        {
            sen1 += sen0;
        }
        else if(n%4 == 3)
        {
            sen1 -= sen0;
        }
        n += 2;
    }
    printf("El seno es: %lf.\n", sen1);//se imprime el resultado

}
