Proceso Fun_Seno
	Definir sen0,sen1,n,n1,aux,x,i Como Real;
	Escribir 'Ingrese el angulo: ';
	Leer x;
	x <- convertirARadianes(x);
	sen1 <- 0;
	sen0 <- 1;
	n <- 1;
	n1 <- 1;
	Mientras sen0>0.0000000001 O sen0<-0.0000000001 Hacer
		n1 <- factorial(n1);
		aux <- potencia(x, n);
		sen0 <- aux/n1;
		Si n MOD 4==1 Entonces
			sen1 <- sen1+sen0;
		SiNo
			sen1 <- sen1-sen0;
		FinSi
		n <- n+2;
	FinMientras
	Escribir 'El seno es; ',sen1;
FinProceso
