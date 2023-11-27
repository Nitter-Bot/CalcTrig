#include<stdio.h>
#include"funciones.h"
void menu1();
void menu2();
int main()
{
	float r;
	printf("\tBienvenido a la calculadora trigonometrica\n\n");
	int opciones;
	float x,y;
	do
	{
		menu1();
		scanf("%i",&opciones);
		switch(opciones)
		{
		case 0:break;
		case 1://Potencia
			printf("\nIngrese numero: ");
			scanf("%f",&x);
			printf("\nIngrese potencia: ");
			scanf("%f",&y);
			r=potencia(x,y);//Llamamos a la funcion
			printf("\n%f",r);
			break;
		case 2://Raiz
			printf("\nIngrese numero: ");
			scanf("%f",&x);
			r=raizCuadrada(x);
			printf("\n%f",r);
			break;
		case 3://FACTORIAL
			printf("\nIngrese numero: ");
			scanf("%f",&x);
			r=factorial(x);
			printf("\n%f",r);
			break;
		case 4://Seno
			printf("Espere 4");break;
		case 5://Coseno
			printf("\nIngrese angulo: ");
			scanf("%f",&x);
			r=Coseno(x);
			printf("\n%f",r);
			break;
		case 6://Tangente
			printf("Espere 6");break;
		case 7://Ans
			printf("Espere 7");break;
		case 8://Historial
			printf("Espere 8");break;
		default:
			printf("Opcion no reconocida intente de nuevo");
		}
		if(opciones!=0){
		menu2();
		scanf("%i",&opciones);}

	}while(opciones!=0);
	
}

void menu1()
{	//menu de presentacion al usuario
	printf("\n¿Que deseas realizar?\n");
	printf("\n[1] Potencia\n");
	printf("[2] Raiz cuadrada\n");
	printf("[3] Factorial\n");
	printf("[4] Seno\n");
	printf("[5] Coseno\n");
	printf("[6] Tangente\n");
	printf("[7] Ans\n");
	printf("[8] Abrir historial\n");
	printf("[0] Salir\n");
	printf("\n");
}
void menu2()
{	//Continuar usando la calucladora o no
	printf("\n\t\a¿Desea continuar?");
	printf("\n\n\t[1]Si\t[0]No\n");
}

