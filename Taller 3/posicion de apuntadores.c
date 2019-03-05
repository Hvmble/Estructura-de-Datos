#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void operacion (int *num1, int *num2);
int main() 
{
	int n1, n2;
	printf("\n Escriba un numero\n");
	scanf("%d",&n1);
	printf("\n Escriba un numero\n");
	scanf("%d",&n2);
	operacion(&n1,&n2);
}
void operacion (int *num1, int *num2){
	int i;
	int *suma;
	*suma = *num1 + *num2;
	printf("\n El resultado de la suma es %d",*suma);
	for(i=0;i<1; i++){
		printf("\n Posición suma %p",*suma);
		printf("\n Posición numero 1 %p",*num1);
		printf("\n Posición numero 2 %p",*num2);
	}
	
}

	


