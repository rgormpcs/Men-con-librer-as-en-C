
#include <stdio.h>
#include <stdlib.h>

int saludo(){

	printf("Entro a saludo \n");
	char nombre[50];
		
	printf("Cual es tu nombre: ");
	scanf("%s", &nombre);
	printf(" Hola %s",nombre);
	
	system("pause");	 
	return 0;

}
