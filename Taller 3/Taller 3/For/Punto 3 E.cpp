/* 
* Programa: Promedio de tres notas
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
	float nota1,nota2,nota3,prom;
	int n;
		
		
	printf("Ingrese numero de estudiantes\n   ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    printf("Introduzca la 1ra nota\n   ");
		scanf("%f",&nota1);
		printf("Introduzca la 2da nota\n   ");
		scanf("%f",&nota2);
		printf("Introduzca la 3ra nota\n   ");
		scanf("%f",&nota3);
		prom=(nota1+nota2+nota3)/3;
		printf("El promedio es: %.2f \n",prom);
	}

		
	
	return 0;
}

