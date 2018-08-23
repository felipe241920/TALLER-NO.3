/* 
* Programa: Area del triangulo
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include<stdio.h>
int main(){
	//Funcion principal
	float base,alt,area;
	printf("Ingrese la altura del triangulos \n");
	scanf ("%f", &alt);
	printf("\nIngrese base del triangulo \n");
	scanf ("%f", &base);
	area=alt*base;
	printf("\nEl area del triangulo es: %.2f",area);	
	}

