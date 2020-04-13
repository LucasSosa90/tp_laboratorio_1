#include "operacionesMatematicas.h"
#include <stdio.h>
#include <stdlib.h>

void sumar (float numeroA,float numeroB)
{
	float suma;
	suma = numeroA + numeroB;
	printf("La suma de A + B es: %.2f \n",suma);
}

void restar (float numeroA,float numeroB)
{
	float resta;
	resta = numeroA - numeroB;
	printf("La resta de A - B es: %.2f \n", resta);
}

void multiplicar (float numeroA,float numeroB)
{
	if(numeroA == 0 || numeroB == 0)
	{
		printf("La multiplicacion de A * B es: 0 \n");
	}
	else
	{
		float multiplicacion;
		multiplicacion = numeroA * numeroB;
		printf("La multiplicacion de A * B es: %.2f \n", multiplicacion);
	}
}

void division (float numeroA,float numeroB)
{
	if(numeroB == 0)
	{
		printf("No se puede dividir un numero por 0 \n");
	}
	else if(numeroA == 0)
	{
		printf("La division de A sobre B es: 0 \n");
	}
	else
	{
		float division;
		division = numeroA/numeroB;
		printf("La division de A sobre B es: %.2f \n", division);

	}
}

void factorial(float numeroA)
{
	if(numeroA < 0){
		printf("No se puede factorear un numero negativo\n");
	}
	else if(numeroA == 0)
	{
		printf("El factoreo de A es: 0 \n");
	}
	else
	{
		double factorialTotal = 1;

		for(int i = (int)numeroA ; i > 0; i--)
		{
			factorialTotal *= i;
		}

		printf("El factorial de A es %f \n",factorialTotal);
	}

}
