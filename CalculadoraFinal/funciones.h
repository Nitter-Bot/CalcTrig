#include<stdio.h>
//Prototipo
float potencia(float x,float y);
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
//Raiz

//Factorial

//Seno

//Coseno

//Tangente
