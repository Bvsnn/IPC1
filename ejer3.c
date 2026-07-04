#include <stdio.h>

int main(){

    float peso;
    int menos40 = 0, entre40y50 = 0, entre50y60 = 0, mas60 = 0;

    printf("Ingrese el peso de los alumnos (-99 para terminar): ");
    scanf("%f", &peso);

    while (peso != -99) {

        if (peso < 40) {
            menos40++;
        } else if (peso < 50) {
            entre40y50++;
        } else if (peso < 60) {
            entre50y60++;
        } else {
            mas60++;
        }

        printf("Ingrese otro peso (-99 para terminar): ");
        scanf("%f", &peso);
    }        

    printf("\nCantidad de alumnos:\n");
    printf("Menos de 40 kg: %d\n", menos40);
    printf("Entre 40 y 50 kg: %d\n", entre40y50);
    printf("Entre 50 y 60 kg: %d\n", entre50y60);
    printf("60 kg o mas: %d\n", mas60);

    return 0;
}