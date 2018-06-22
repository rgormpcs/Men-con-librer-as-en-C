
#include <stdio.h>
#include <stdlib.h>
#include "productos.h"
#include "saludo.h"


int main()
{
	int numeroMenu;
	bool repetirMenu=true;
	while(repetirMenu){
		
		system("cls");
		printf("0 Productos: \n");
		printf("1 Saludo: \n");
		printf("3 Salir: \n");	
		printf("Introduce un menu: \n");
	    scanf("%i", &numeroMenu);
        
        switch(numeroMenu) {
		
		   case 0  :
		      ingresarProductos();
		      break; 
			
		   case 1  :
		   		saludo();
		      break; 
		  case 3  :
		   		repetirMenu=false;
		      break; 
		  
		   default : 
		   printf("Default");
		}
		}
		return 0;
}
