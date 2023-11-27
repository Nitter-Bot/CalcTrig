#include<stdio.h>
//Prototipo por orden
float potencia(float x,float y);
double valorAbsoluto(double numero);
double raizCuadrada(int numero);
float factorial(int num);
double convertirARadianes(double grados);
double seno(double x);
double Coseno(double x);
double tangente(double ang);
void ans(double arg[99],float r,int c);
//Potencias
float potencia(float x,float y)
{
	float val=1;
	if(y==0){return 1;}
	else
	{
		if(y>=1)
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
	// Es decir, que el cuadrado de nuestra estimaciÃ³n difiera mucho del nÃºmero
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
double seno(double x)
{
	double sen0, sen1, n1, aux;
	int n;
	/*printf("\nIngrese el angulo: ");//Se pide angulo
	scanf("%lf", &x);*/
	x = convertirARadianes(x);//Se convierte angulo a radianes
	sen1 = 0;
	sen0 = 1;
	n = 1;
	
	while(sen0 > 0.0000001 || sen0 < -0.0000001)//while que genera la serie
	{
		n1 = factorial(n);
		aux=potencia(x,n);
		sen0 = aux/n1;
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
	return sen1;	
}
//Coseno
double Coseno(double x) {
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
double tangente(double ang)
{
	double x,y,t;
	x=Coseno(ang);
	y=seno(ang);
	t=y/x;
	return t;
}
//Ans
void ans(double arg[99],float r,int c)
{
	arg[c]=r;
}
//Suma y resta
float SumaResta(float a,float b)
{return (a)+(b);}
//Multiplicacion
float Multiplica(float a,float b)
{return a*b;}
//Division
float Divide(float a, float b)
{return a/b;}
//Hisotorial
double historial(double arr[99], int c1, int m1)
{
	for(c1 = 0; c1 <= m1; c1++)
	{
		if(arr[c1] != 0)
		{
			printf("Su operacion %d es %lf.\n", c1+1, arr[c1]);
		}	
	}
}
