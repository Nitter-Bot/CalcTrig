Proceso Raizes
	Escribir 'Ingrese un numero'
	Leer x
	b <- x
	z <- Falso
	Mientras z=Falso Hacer
		Si b=x/b Entonces
			z<-Verdadero
		SiNo
			b=(1/2)*((x/b)+b)
		Fin Si
	Fin Mientras
	Escribir b
FinProceso
