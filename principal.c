#include <stdio.h>
#include "funciones.h"


int main(){
	int a, b,op;
	printf("\n1 Sumar\n2 Restar\n3 Multiplicar\n4 Dividir");
	scanf("%d", &op);
	
	printf("introduce el primer valor: ");
	scanf("%d", &a);
	printf("introduce el segundo valor: ");
	scanf("%d", &b);
	if(op == 1){

		printf("El resultado de la suma es  %d", sumar(a,b));
	}
	if(op == 2){

		printf( "El resultado de la resta es  %d",restar(a,b));
	}
	if(op == 3){

		printf("El resultado de la multiplicacion es  %d", multiplicar(a,b));
	}
	if(op == 4){

		printf( "El resultado de la division es  %f", dividir(a,b));
	}

	return 0;
}
