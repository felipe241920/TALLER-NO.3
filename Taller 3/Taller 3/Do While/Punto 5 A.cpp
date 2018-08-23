/* 
* Programa: Tabla de multiplicar
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
//Funcion principal
main(){
	int multiplicacion,i=1;
	int ingreso;
	printf("Ingresa el numero de la tabla : ");
	scanf("%d",&ingreso);
	do{
		
		multiplicacion = ingreso * i;
		printf("%d * %d = %d\n", ingreso,i,multiplicacion );
		i++;
	}
	while(i<=10);
	
}
