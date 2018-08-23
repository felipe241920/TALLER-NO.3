/* 
* Programa: Mitad de un numero
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
	float num;
	printf("Introduzca numero diferente de 1 y 0\n");
	scanf("%f",&num);
	while(num !=0 && num != 1){
		printf("la mitad de %.2f es %.2f\n",num, num /2);
		printf("introduzca otro numero \n");
			scanf("%f",&num);
	


	 }
	return 0;
}
