#include<stdio.h>
#include"funciones.h"
void menu1();
void menu2();
int main()
{
	float r;
	double memoria[99]={0};
	printf("\tBienvenido a la calculadora trigonometrica\n\n");
	int opciones,c=0;
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
			r=potencia(x,y);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 2://Raiz
			printf("\nIngrese numero: ");
			scanf("%f",&x);
			r=raizCuadrada(x);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 3://FACTORIAL
			printf("\nIngrese numero: ");
			scanf("%f",&x);
			r=factorial(x);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 4://Seno
			printf("\nIngrese el angulo: ");
			scanf("%f",&x);
			r=seno(x);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 5://Coseno
			printf("\nIngrese angulo: ");
			scanf("%f",&x);
			r=Coseno(x);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 6://Tangente
			printf("Ingrese el angulo: ");
			scanf("%f",&x);
			if(x==90){printf("Opcion invalida");}
			else{r=tangente(x);printf("%f",r);}
			ans(memoria,r,c);
			break;			
		case 7://Suma o resta
			printf("\nIngrese ambos numeros:\n");
			scanf("%f %f",&x,&y);
			r=SumaResta(x,y);
			printf("\n%f",r);
			ans(memoria,r,c);
			break;
		case 8://Multiplicacion
			printf("\nIngrese ambos numeros:\n");
			scanf("%f %f",&x,&y);
			r=Multiplica(x,y);
			ans(memoria,r,c);
			printf("\n%f",r);
			printf("\n%f",r);break;
		case 9://Division
			printf("\nIngrese ambos numeros:\n");
			scanf("%f %f",&x,&y);
			r=Divide(x,y);
			printf("\n%f",r);
			ans(memoria,r,c);break;
		case 10://Ans
			printf("%lf\n",memoria[c-1]);
			break;
		case 11://Historial
			printf("Espere 8");break;
		default:
			printf("Opcion no reconocida intente de nuevo");
		}
		c++;
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
	printf("[7] Suma o resta\n");
	printf("[8] Multiplicacion\n");
	printf("[9] Division\n");
	printf("[10] Ans\n");
	printf("[11] Abrir historial\n");
	printf("[0] Salir\n");
	printf("\n");
}
void menu2()
{
	printf("\n\t\a¿Desea continuar?");
	printf("\n\n\t[1]Si\t[0]No\n");
}


