#include <stdio.h>

int main()
{
    int limite, numero, divisor;
    int primos, gemelos;
    int ultimoPrimo;
    int continuar = 0;

    while(continuar == 0)
    {
        primos = 0;
        gemelos = 0;
        ultimoPrimo = 0;

        printf("Ingrese el limite superior a considerar: ");
        scanf("%d", &limite);

        numero = 2; 

        while(numero <= limite)
        {
            divisor = 2; 

            while(divisor < numero)
            {
                if(numero % divisor == 0) 
                {
                    break;
                }

                divisor++;
            }

            if(divisor == numero)
            {
                primos++;

                if(numero - ultimoPrimo == 2)
                {
                    gemelos++;
                }

                ultimoPrimo = numero;
            }

            numero++;
        }

        printf("Existen %d numeros primos y %d pares de gemelos primos.\n", primos , gemelos);

        printf("0 = continuar / 1 = finalizar: ");
        scanf("%d", &continuar);
    }

    printf(">>Finalizando<<.\n");

    return 0;
}
