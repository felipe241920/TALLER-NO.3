/* 
* Programa: vocal 
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main()
{
	char letra;
	printf("Digite la letra:\n");
	scanf("%c",&letra);
	
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
	{
		printf("Es una vocal en minuscula");
	}
	else if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
	{printf("Es una vocal en Mayuscula");
	}
	else{
		printf("No es una vocal");

	}	
	return 0;
}
	
