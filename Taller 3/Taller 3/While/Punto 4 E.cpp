/* 
* Programa: Area de un cubo
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio>
using namespace std;
//Funcion principal
int main() {
	int lado;
	while(lado!= 0){
	printf("Ingrese un lado del cubo o ingrese 0 para salir\n");
	scanf("%d",&lado);
	printf("El area del cubo es: %d\n",(lado*lado)*6);
	}
	return 0;
}

