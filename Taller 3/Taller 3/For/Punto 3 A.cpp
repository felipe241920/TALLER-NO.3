/* 
* Programa: Area de 5 circunferencias
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
	float area, radio;
	 for (int i=1;i<6;i++){
		printf ("Introdusca radio %d\n", i);
		scanf("%f",&radio);
		area = 3.1416 * radio *radio;
		printf(" El area de la circunferencia %d es: %.2f\n",i,area);
	 }
	return 0;
}
