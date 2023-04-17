#include <stdio.h>

void sumar(int sumando1, int sumando2){
    int suma;
    suma= sumando1 + sumando2;
    printf("\nLa sumas es:  %d", suma);
}


void restar(int a,int b){
    int resta;
    resta= a - b;
    printf("\nLa resta es: %d", resta);
}


void multiplicar(int c,int d){
    int multi;
    multi= c * d;
    printf("\nLa resta es: %d", multi);
}


void dividir(float q,float e){
    float divi;
    if(e == 0){
    printf("No se puede dividir entre 0");
    }else{
    divi= q / e;
    printf("\nLa resta es: %.2f", divi);
    }
}

void menu(){
    int num1, num2, num3;
    int opc;
    printf("Insertar primer numero\n");
    scanf("%d", &num1);
    printf("Insertar segundo numero\n");
    scanf("%d", &num2);

    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Seleccione una opcion:");
    scanf("%d", &opc);
   
    switch (opc)
    {
    case 1:
        sumar(num1, num2);
    break;
    case 2:
        restar(num1, num2);
    break;
    case 3:
        multiplicar(num1, num2);
    break;
    case 4:
        dividir(num1, num2);
    break;
    }
    }

int main() {
    menu();

}