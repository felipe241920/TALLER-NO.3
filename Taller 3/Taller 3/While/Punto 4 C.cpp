/* 
* Programa: Suma de numeros primos
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;

int main()
{
	int suma=0,b;
	printf("Los numeros primos son:\n");
	while(b!=1){
	for(int a=1;a<=50;a++)
	{
		int aux=0;
		
		if(a%a==0 && a%1==0)
		{
			aux++;
		}
	
		if(aux==2)
		{
			printf("%d\n",a);
			
			suma=suma+a;
		
		}
		if (a==50){
			b=1;
		}
	}
	
	}
	printf("La suma de los numeros primos es: %d	",suma);
	return 0;
}

