
#include <stdio.h>
#include <stdlib.h>

int ingresarProductos(){
	char productos[6][10];//[numero de productos * numero de atributos por producto] [tamanio maximo de la cadena]
	
	int i=0;
	int j=0;
	printf("Entro a Libreria Ingreso de Productos \n");
	
	
		for(j=0;j<6;j++){
			
    	
			if(j %2 ==0){
				printf("Nombre: ");
				scanf("%s", &productos[j]);
			}else{
				printf("Valor: ");
				scanf("%s", &productos[j]);
			}
    	
    	
		}
	
	printf("Productos: \n");
	printf("Nombre|Valor \n");
		
		j=0;
		while(j<6){
    		printf("%s",productos[j]);
			printf("|");
			printf("%s",productos[j=j+1]);
			printf("\n");	
			j=j+1;
			
    	}
		
		system("pause");
		return 0;

}
