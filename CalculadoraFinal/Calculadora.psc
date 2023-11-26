Proceso Calculadora
	Escribir "Calculadora"
	Hacer
		Escribir "¿Que operacion realizara?"
		Escribir"[1] Potencia"
		Escribir"[2] Raiz cuadrada"
		Escribir"[3] Factorial"
		Escribir"[4] Seno"
		Escribir"[5] Coseno"
		Escribir"[6] Tangente"
		Escribir"[7] Ans"
		Escribir"[8] Abrir historial"
		Escribir"[0] Salir"
		Leer opciones
		Segun opciones Hacer
			1:
				Escribir 'Aqui va funcion potencia' 
			2:
				Escribir 'Funcion de la raiz cuadrada'
			3:
				Escribir 'Factorial del numero :0'
			4:
				Escribir 'Funcion seno'
			5:
				Escribir 'Funcion coseno' 
			6:
				Escribir 'Funcion tangente'
			7:
				Escribir 'Escribe el ans'
			8:
				Escribir 'Funcion abrir historial'
			De Otro Modo:
				Escribir 'Opcion incorrecta elija de nuevo'
		Fin Segun
		Escribir "¿Continuar?[1]Si [0]No"
		Leer x
		Si x=1 Entonces
			Escribir'De acuerdo'
		FinSi
	Hasta Que (opciones=0 O x=0 )

FinProceso
