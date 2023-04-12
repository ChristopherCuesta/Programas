#include <stdio.h>

int main(void) {
    int opc, i;
    int pisoact = 0;
    int pisous, pisosel;
    while (opc != 4)
    {
        printf("Seleccione la opcion\n");
        printf("1. Llmamar a ascensor\n");
        printf("2. Seleccionar piso\n");
        printf("3. Mostrar el piso\n");
        printf("4. Salir del programa\n");
        printf("Escriba la seleccion: ");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            
            printf("\nIntroducir en que piso esta usted(0-9): ");
            scanf("%d", &pisous);
        
            if(pisoact == pisous){
            	printf("El ascensor ya esta en el piso actual\n");
            }else{
            	printf("Moviendo el ascensor al piso %d\n",pisous);
            	while(pisoact != pisous)
				if (pisous > pisoact){
					pisoact++;
					printf("El ascensor esta en el piso %d\n", pisoact);
				}else{
					pisoact--;
					printf("El ascensor esta en el piso %d\n", pisoact);
				}
			printf("El ascensor llego al piso %d\n", pisoact);
			}
            
            break;
            
        case 2:
        	printf("Seleccione a que piso quiere ir (0-9): ");
        	scanf("%d", &pisosel);
        	if(pisosel == pisoact){
        		printf("\nEl ascensor ya se encuentra en ese piso\n");
			}else{
				printf("Moviendo el ascensor al piso %d\n",pisosel);
				if(pisosel > pisoact){
					for(i = pisoact; i<= pisosel; i++){
						printf("El ascensor esta en el piso %d\n",i);
					}
				}else{
					for(i = pisoact; i>= pisosel; i--){
						printf("El ascensor esta en el piso %d\n",i);
					}
				}
			printf("El ascensor llego al piso %d\n", pisosel);	
			}
			
			break;
		case 3:
			switch(pisoact){
				case 0:
					printf("El ascensor esta en la planta baja\n");
				break;
				case 1:
					printf("El ascensor esta en el primer piso\n");
				break;
				case 2:
					printf("El ascensor esta en el segundo piso\n");
				break;
				case 3:
					printf("El ascensor esta en el tercer piso\n");
				break;
				case 4:
					printf("El ascensor esta en el cuarto piso\n");
				break;
				case 5:
					printf("El ascensor esta en el quinto piso\n");
				break;
				case 6:
					printf("El ascensor esta en el sexto piso\n");
				break;
				case 7:
					printf("El ascensor esta en el septimo piso\n");
				break;
				case 8:
					printf("El ascensor esta en el octavo piso\n");
				break;
				case 9:
					printf("El ascensor esta en el noveno piso\n");
				break;
			}   
			break;
        case 4:
        	return 0;
        default:
        	printf("\nOpcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }
    }  
}