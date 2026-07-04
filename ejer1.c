#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int cantidad = 0;
    float promedio;

    printf("Ingrese numeros (-999 para terminar):\n");
    scanf("%d", &numero);

    while (numero != -999) {
        suma = suma + numero;
        cantidad++;

        scanf("%d", &numero);
    }

    if (cantidad > 0) {
        promedio = (float)suma / cantidad;
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron numeros para calcular el promedio.\n");
    }

    return 0;
}