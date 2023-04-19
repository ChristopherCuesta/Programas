#include <stdio.h>
int pisoact = 0;


void llamarascensor(){
    int pisous;
        printf("\nIntroducir en que piso esta usted(0-9): ");
        scanf("%d", &pisous);
        if (pisous >= 0 && pisous <= 9){
            if(pisoact == pisous){
            	printf("El ascensor ya esta en el piso actual\n");
            }else{
            	printf("Moviendo el ascensor al piso %d\n",pisous);
            	while(pisoact != pisous){
				
				if (pisous > pisoact){
					pisoact++;
					printf("El ascensor esta en el piso %d\n", pisoact);
				}else{
					pisoact--;
					printf("El ascensor esta en el piso %d\n", pisoact);
				}
				}
			printf("El ascensor llego al piso %d\n", pisoact);	
			}
            }else{
                printf("No se ha seleccionado un piso valido\n");
            }
}


void seleccionarpiso(){
    int pisosel;
    int i;
    printf("Seleccione a que piso quiere ir (0-9): ");
    scanf("%d", &pisosel);
    if(pisosel >= 0 && pisosel <= 9){
        if(pisosel == pisoact){
            printf("\nEl ascensor ya se encuentra en ese piso\n");
		}else{
			printf("Moviendo el ascensor al piso %d\n",pisosel);
			if(pisosel > pisoact){
				for(i = pisoact; i<= pisosel; i++){
					printf("El ascensor esta en el piso %d\n",i);
					
				}
			}else{
				for( i = pisoact; i>= pisosel; i--){
					printf("El ascensor esta en el piso %d\n",i);
					
				}
			}
			printf("El ascensor llego al piso %d\n", pisosel);
			pisoact=pisosel;	
			}
			}else{
                printf("No se ha seleccionado un piso valido\n");
            }
}


void mostrarpiso(){

    switch(pisoact){

		case 0:
			printf("\nEl ascensor esta en la planta baja\n");
		break;

		case 1:
			printf("\nEl ascensor esta en el primer piso\n");
		break;

		case 2:
			printf("\nEl ascensor esta en el segundo piso\n");
		break;

		case 3:
			printf("\nEl ascensor esta en el tercer piso\n");
		break;

		case 4:
			printf("\nEl ascensor esta en el cuarto piso\n");
		break;

		case 5:
			printf("\nEl ascensor esta en el quinto piso\n");
		break;

		case 6:
			printf("\nEl ascensor esta en el sexto piso\n");
		break;

		case 7:
			printf("\nEl ascensor esta en el septimo piso\n");
		break;

		case 8:
			printf("\nEl ascensor esta en el octavo piso\n");
			break;

		case 9:
			printf("\nEl ascensor esta en el noveno piso\n");
		break;
		}   
}


void menu(){
    int opc = 0;
    do{
        printf("\nSeleccione la opcion\n");
        printf("\n1. Llamar a ascensor\n");
        printf("2. Seleccionar piso\n");
        printf("3. Mostrar el piso\n");
        printf("4. Salir del programa\n");
        printf("\nEscriba la seleccion: ");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            llamarascensor();
            break; 
        case 2:
        	seleccionarpiso();
			break;
		case 3:
			mostrarpiso();
			break;
        case 4:
        	printf("Saliendo del programa");
        	return;
        default:
        	printf("\nOpcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }
    }while (opc != 4);
}


int main() {
    menu(); 
}