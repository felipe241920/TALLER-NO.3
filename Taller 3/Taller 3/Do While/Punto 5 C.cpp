/* 
* Programa: Operacion matematica
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
	char c;  
	int num,con=0,suma=0;
	do
	{ 
		printf ("introduzca un numero entero: ");
		scanf ("%d", &num);
		int resultado=(num*num-num);
		con=con+1;
		printf("\n%d * %d - %d = %d \n\n", num,num,num,resultado);
		printf("\n deaseas ingresar otro numero (s\n)?: ");
		suma=suma+resultado;
		fflush (stdin);
		scanf("%c", &c);
		printf ("\n");
	}while(c != 'n');
	printf("El numero de datos ingresados es: %d\n",con);
	printf("La suma de los ressultados es: %d",suma);
	
	return 0;
}
