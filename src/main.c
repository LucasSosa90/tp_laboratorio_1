#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "operacionesMatematicas.h"


//Desclaracion funciones
void leerOpcion(void);
void mostrarMenu(bool, bool, float, float);
float ingresarNumero(void);
void procesarOpcion(int,float,float);


int main(void)
{
	setbuf(stdout,NULL);

	leerOpcion();

	return EXIT_SUCCESS;

}

//Funcion para leer la opcion que ingreso el usuario
void leerOpcion(void)
{
	int opcion;

	bool ingresoPrimerOperando = false;
	bool ingresoSegundoOperando = false;
	float primerNumero = 0;
	float segundoNumero = 0;

	do
	{
		mostrarMenu(ingresoPrimerOperando,ingresoSegundoOperando,primerNumero,segundoNumero);
		scanf("%d", &opcion);

		while(opcion < 1 || opcion > 9)
		{
			system("cls");
			printf("Opcion invalida, por favor vuelva a ingresarlo \n");
			mostrarMenu(ingresoPrimerOperando,ingresoSegundoOperando,primerNumero,segundoNumero);
			scanf("%d", &opcion);
		}

		if(opcion == 1)
		{
			ingresoPrimerOperando = true;
			primerNumero = ingresarNumero();
		}
		else if(opcion == 2)
		{
			ingresoSegundoOperando = true;
			segundoNumero = ingresarNumero();
		}
		else
		{
			if((ingresoPrimerOperando == false || ingresoSegundoOperando == false) && opcion != 9)
			{
				printf("Por favor revise que haya ingresado ambos numeros \n");
			}
			else
			{
				procesarOpcion(opcion, primerNumero,segundoNumero);
			}
		}


	}while(opcion != 9);

}

//Funcion para mostrar el menu
void mostrarMenu(bool primerOperando, bool segundoOperando, float primerNumero, float segundoNumero)
{
	printf( "Elija un opcion: \n");

	if(primerOperando)
	{
		printf("1. Ingresar 1er operando (A = %.2f) \n", primerNumero);
	}
	else
	{
		printf("1. Ingresar 1er operando (A = No ingresado) \n");
	}

	if(segundoOperando)
	{
		printf("2. Ingresar 2do operando (B = %.2f) \n", segundoNumero);
	}
	else
	{
		printf("2. Ingresar 2do operando (B = No ingresado) \n");
	}

	printf( "3. Calcular la suma (A+B)\n");
	printf( "4. Calcular la resta (A-B) \n");
	printf( "5. Calcular la division \n");
	printf( "6. Calcular la multiplicacion \n");
	printf( "7. Calcular el factorial (A!) \n");
	printf( "8. Calcular todas las operaciones \n");
	printf( "9. Salir \n");

}

//Funcion para ingresar un numero
float ingresarNumero(void)
{
	float numero;
	printf("Ingrese el numero: \n");
	scanf("%f", &numero);
	return numero;

}

//Funcion para realizar operacion de acuerdo a opcion
void procesarOpcion(int opcion, float numUno, float numDos)
{
	switch(opcion)
	{
		case 3:
			sumar(numUno,numDos);
		break;

		case 4:
			restar(numUno,numDos);
		break;

		case 5:
			multiplicar(numUno,numDos);
		break;

		case 6:
			division(numUno,numDos);
		break;

		case 7:
			factorial(numUno);
		break;

		case 8:
			sumar(numUno,numDos);
			restar(numUno,numDos);
			multiplicar(numUno,numDos);
			division(numUno,numDos);
			factorial(numUno);
		break;

		default:
		break;
	}
}
