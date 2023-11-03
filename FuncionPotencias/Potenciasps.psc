Proceso Potencia
	val<-1
	Escribir 'Ingrese Numero'
	Leer num
	Escribir 'Ingrese potencia'
	Leer pow
	Si pow=0 Entonces
		Escribir '1'
	SiNo//Para cuando la potencia da 0 
		Si pow>1 Entonces//Potencias positivas
			Repetir
				val=val*num				
				pow=pow-1
			Hasta Que pow=0
			Escribir val		
		SiNo//Potencias negativas
			Si pow<1 Entonces
				pow=pow*(-1)
				Repetir
					val=val*num	
					pow=pow-1
				Hasta Que pow=0
				negval<-1
				negval=1/val
				Escribir negval
			Fin Si
			
		Fin Si
	Fin Si
FinProceso
