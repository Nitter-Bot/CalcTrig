#include<stdio.h>
//Prototipo por orden
float potencia(float x,float y);
double valorAbsoluto(double numero);
double raizCuadrada(int numero);
float factorial(int num);
double convertirARadianes(double grados);

double calcularCoseno(double x);
//Potencias
float potencia(float x,float y)
{
	float val=1;
	if(y==0){return 1;}
	else
	{
		if(y>1)
		{//Potencias positivas
			do{
				val*=x;
				y--;}
			while(y!=0);
			return val;
		}
		else
		{//Potencias negativas
			y*=-1;
			do{
				val*=x;
				y--;}
			while(y!=0);
			return 1/val;
		}
	}
}
//Valor absoluto
double valorAbsoluto(double numero)
{
	if (numero < 0){return numero * -1;}
	return numero;
}
//Raiz
double raizCuadrada(int numero)
{
	double margen = 0.000001;
	double estimacion = 1.0;
	// Mientras haya una diferencia notable.
	// Es decir, que el cuadrado de nuestra estimación difiera mucho del número
	while (valorAbsoluto((estimacion * estimacion) - numero) >= margen)
	{
		double cociente = numero / estimacion;
		double promedio = (cociente + estimacion) / 2.0;
		estimacion = promedio;
	}
	return estimacion;
}
//Factorial
float factorial(int num)
{
	float principal=1;
	principal=num;
	while(num>1)
	{
		num--;
		principal*=num;
	}
	return principal;
}
//Conversion a radianes
double convertirARadianes(double grados) {
    return grados * (3.14159265358979323846 / 180.0);
}
//Seno

//Coseno
double calcularCoseno(double x) {
    double resultado = 1.0;
    double termino = 1.0;
    int n = 1;
	x=convertirARadianes(x);
    while (termino > 0.0000001 || termino < -0.0000001) {
        termino = (termino * x * x) / (2 * n * (2 * n - 1));
        if (n % 2 == 0) {
            resultado += termino;
        } else {
            resultado -= termino;
        }
        n++;
    }

    return resultado;
}
//Tangente
