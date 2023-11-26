#include<stdio.h>
float potencia(float x,float y);
int main()
{
	float x,y,pow;
	printf("Ingrese Numero y Potencia:");
	scanf("\n%f\n%f",&x,&y);
	printf("\nEl resultado es = ");
	pow=potencia(x,y);	
	printf("%f",pow);
}
float potencia(float x,float y)
{
	float val=1;
	if(y==0){return '1';}
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
