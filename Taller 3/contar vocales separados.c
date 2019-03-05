#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void vocales(char *p_cad)
{	
	int contA = 0;
	int contE = 0;
	int contI = 0;
	int contO = 0;
	int contU = 0;
	
	while(*p_cad)
	{
		switch(*p_cad)
		{
		case 'a': contA++;
		break;
		case 'A':contA++;
		break;
		case 'e':contE++;
		break;
		case 'E':contE++;
		break;
		case 'i':contI++;
		break;
		case 'I':contI++;
		break;
		case 'o':contO++;
		break;
		case 'O':contO++;
		break;
		case 'u':contU++;
		break;
		case 'U':contU++;
		}
		p_cad++;
	}
	
	printf ("cantidad de vocal a: %d\n", contA);
	printf ("cantidad de vocal e: %d\n", contE);
	printf ("cantidad de vocal i: %d\n", contI);
	printf ("cantidad de vocal o: %d\n", contO);
	printf ("cantidad de vocal u: %d\n", contU);


	
}
int main() {
	char cadena[30];
	char *p_cad;
	p_cad = cadena;
	printf("Ingrese su nombre: ");
	fgets (cadena,30,stdin);
	vocales(p_cad);
}

