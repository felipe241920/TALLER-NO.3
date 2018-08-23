/* 
* Programa: numero par o impar
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int num1;
	printf("\nIngrese un numero para saber si es par o impar\n");
	scanf("%d",&num1);
	
	if(num1 % 2 == 0)
	{
		printf("Es par");
	}
	
	else 
	{
		printf("Es impar");
	}
	
	return 0;
}
