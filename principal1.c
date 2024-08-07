#include <stdio.h>
int main(){
    int numero1, numero2, suma, resta, multi, div;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    suma = numero1 +  numero2;
    resta = numero1 - numero2;
    multi = numero1 * numero2;
    div = numero1 / numero2;
    printf("el resultado de la suma es: %d \n", suma);
    printf("el resultado de la resta es: %d \n", resta);
    printf("el resultado de la multiplicacion es: %d \n", multi);
    printf("el resultado de la divicion es: %d \n", div);
}