#include <stdio.h>

// Funcion principal para saber si un numero es primo o no
int esPrimo(int n);

int main()
{

    // Variables del programa
    int limite;
    int cont;
    int gemelos;
    int ultimo;
    int i;
    int salir = 0;

    // Si se continua, se repite
    while(salir == 0)
    {

        // Reinicio de los contadores
        cont = 0;
        gemelos = 0;
        ultimo = 0;

        printf("Ingrese el limite superior a considerar: ");
        scanf("%d", &limite);

        // Revisa todos los numeros desde el 2 hasta el limite ingresado
        for(i = 2; i <= limite; i++)
        {
            if(esPrimo(i))
            {

                // Contar numeros primos
                cont++;

                if(ultimo != 0)
                {

                    // ¿Es par de primos gemelos?
                    if(i - ultimo == 2)
                    {
                        gemelos++;
                    }
                }

                // Guarda el ultimo primo encontrado
                ultimo = i;
            }
        }
        
        // Resultados
        printf("Existen %d numeros primos y %d pares de gemelos primos.\n", cont, gemelos);

        printf("0 = Continuar / 1 = Terminar: ");
        scanf("%d", &salir);
    }

    printf(">>Terminando<<\n");

    return 0;
}

// ¿El numero es primo?
int esPrimo(int n)
{
    int i;

    // 0 y 1 no son numeros primos
    if(n <= 1)
    {
        return 0;
    }

    // ¿Tiene divisores?
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    // Por si no tiene divisores = primo
    return 1;
}