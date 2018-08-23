/* 
* Programa: Suma de numeros impares del 1 al 50
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
int i=1,s=0;
while ( i != 50 ) {
	i++;
	if ( i % 2 != 0 ){
		printf("%d+",i);
			s=s+i;
	}
}
printf(" = %d",s);
	
return 0;
}

