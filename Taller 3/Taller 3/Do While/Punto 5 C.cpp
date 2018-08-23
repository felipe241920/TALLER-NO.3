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
	int num;
	do
	{ 
		printf ("introduzca un numero entero: ");
		scanf ("%d", &num);
		printf("\n%d * %d - %d = %d \n\n", num,num,num,num*num-num);
		printf("\n deaseas ingresar otro numero (s\n)?: ");
		fflush (stdin);
		scanf("%c", &c);
		printf ("\n");
	}while(c != 'n');
	
	return 0;
}
