#include<stdio.h>
#include"funciones.h"
void menu1();
void menu2();
int main()
{
	printf("\tBienvenido a la calculadora trigonometrica\n\n");
	int opciones;
	do
	{
		menu1();
		scanf("%i",&opciones);
		switch(opciones)
		{
		case 0:break;
		case 1:
			printf("Espere 1");break;
		case 2:
			printf("Espere 2");break;
		case 3:
			printf("Espere 3");break;
		case 4:
			printf("Espere 4");break;
		case 5:
			printf("Espere 5");break;
		case 6:
			printf("Espere 6");break;
		case 7:
			printf("Espere 7");break;
		case 8:
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
{
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
{
	printf("\n\t\a¿Desea continuar?");
	printf("\n\n\t[1]Si\t[0]No\n");
}
