#include<stdio.h>
float factorial(int num);

int main()
{
	int number;
	float fact;
	printf("Ingrese numero:\n");
	scanf("%i",&number);
	fact=factorial(number);
	printf("%f",fact);
}

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
