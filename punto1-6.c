#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int opcion;
	char cadena[50];
    int i = 0;
    int j;
	int longitud;
	char palabra[10];
	char auxiliar[10];
	int suma=0;
	int media;
	int numero[10];
	do
	{
		printf("\n ***** Menu ***** \n");
		printf("\n 	1.\n");
		printf("\n  6. Palabras al Inverso \n ");
		printf("\n  7. Media de numeros \n ");
		printf("\n  8. Salir \n ");
		do
		{
			printf("\n  Introduzca la opción \n ");
			scanf("%d",&opcion);
			
		}while(opcion < 1 ||opcion > 8 );
		switch(opcion)
		{
				case 1:
					system("cls");
					printf ( "\n\n Ingrese una palabra \n\n");
					scanf("%s", palabra); 
					longitud = strlen(palabra);
					for (i=longitud; i>=0;i--){
						auxiliar [j]= palabra[i];
						printf (" %s\n" , auxiliar );
					}
					system("pause");
					system("cls");		
					break;
				case 6:
					system("cls");
					for(j=0;j<10;i++){
						printf ( "\n\n Ingrese una palabra \n\n");
						scanf("%s", palabra); 
						longitud = strlen(palabra) ;
						for (i=longitud; i>=0;i--){
							auxiliar [j]= palabra[i];
							printf (" %s" , auxiliar );
						}	
					}
					system("pause");
					system("cls");
					break;
				case 7:
					system("cls");
					for (i=0;i<10;i++){
						printf("Escriba un numero \n");
						scanf("%d",&numero[i]);
						suma = suma + numero[i];
						media = suma/10;
					}
					printf("\n %d La Media\n", media);
					system("pause");
					system("cls");
					break;		 										 											
		}
	}while(opcion!= 8);
	
	

}
