/* 
* Programa: dia de la semana
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>

using namespace std;
//Funcion principal
int main()
	
{
	int num;
	printf("Digite un numero del 1 al 7\n");
	scanf("%d",&num);
	
	if(num==1 )
	{
		printf("El dia es un lunes ");
	}
	else if (num==2)
	{printf("El dia es un martes");
	}
	else if (num==3)
	{
		printf("El dia es un miercoles");

	}	
	else if (num==4)
	{
		printf("El dia es un jueves");
	}
	else if (num==5)
	{
		printf("El dia es un viernes");
	}
	else if (num==6)
	{
		printf("El dia es un sabado");
	}
	else if (num==7)
	{
		printf("El dia es un domingo");
	}
	return 0;
}
	
