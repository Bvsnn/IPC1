#include <stdio.h>

// Grupo: Bastián Contreras y Benjamín Aguila
// El programa funciona mientras los valores sean pequeños o medianos
// Los valores muy grandes pueden afectar la ejecucion del programa

int main()
{

    // Variables del programa
    int limite;
    int cont;
    int gemelos;
    int ultimo;
    int i, j;
    int salir = 0;

    while(salir == 0)
    {
        // Reinicio de los contadores pra cada ejecucion del programa
        cont = 0;
        gemelos = 0;
        ultimo = 0;

        printf("Ingrese el limite superior a considerar: ");
        scanf("%d", &limite);

        // Guarda el estado de cada número en el rango [0, limite]
        // 1 = Considerado como candidato a ser primo, 0 = descartado por la criba de Eratóstenes al ser multiplo de otro número
        int primo[limite + 1];

        // Para poder usar la criba de Eratóstenes primero todos los numeros deben de considerarse candidatos a numero primo
        for(i = 0; i <= limite; i++)
        {
            primo[i] = 1;
        }

        // Aca se indica que 0 y 1 no son numeros primos
        primo[0] = 0;
        primo[1] = 1;

        // Aplicar la "Criba de Eratóstenes", en la cual se revisa hasta la raiz cuadrada del limite
        for(i = 2; i * i <= limite; i++)
        {
            // Si el número es aun considerado primo
            if(primo[i] == 1)
            {
                // Aca se marcan todos los multiplos como no primos para descartarlos, ya que al ser divisibles por un numero
                // distinto a "1" y de si mismo, no puede ser numero primo
                for(j = i * i; j <= limite; j += i)
                {
                    primo[j] = 0;
                }
            }
        }

        // Se cuentan los numeros primos que se encontraron
        for(i = 2; i <= limite; i++)
        {
            if(primo[i] == 1)
            {
                cont++;

                // Se revisa si se forma un par de primos gemelos
                if(ultimo != 0)
                {
                    if(i - ultimo == 2)
                    {
                        gemelos++;
                    }
                }

                // Se guarda el ultimo primo encontrado para poder comparar primos consecutivos
                ultimo = i;
            }
        }

        printf("Existen %d numeros primos y %d pares de gemelos primos.\n", cont, gemelos);
        printf("0 = Continuar / 1 = Finalizar: ");
        scanf("%d", &salir);
    }

    printf(">>Finalizndo<<\n");
    return 0;
}


// Observaciones:
//
// Al principío usamos una formula la cual era muy lenta para la ejecucion del programa, ya que esta verificaba numero por numero,
// asi que tardaba mucho en realizar limites con valores a 100.000 o más, para solucionar esto, se consulto con compañeros de
// carrera y se hizo una investigacion aparte, llegando a encontrar la que creemos el mejor metodo para este programa,
// "La criba de Eratóstenes", el cual es un algoritmo que permite encontrar numeros primos dentro de un rango definido, eliminando
//  los multiplos de cada numero, dejando por descarte solo los que no tienen divisores aparte del 1 y de si mismos.
//
// https://www.smartick.es/blog/matematicas/numeros-enteros/numeros-primos-criba-eratostenes/
// https://www-geeksforgeeks-org.translate.goog/c/c-program-to-implement-sieve-of-eratosthenes/?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc&_x_tr_hist=true
//
//
//
// En pruebas del programa, se pudo observar que debido al stack el programa aguanta un limite de poco más de 500.000,
// una solucion para esta limitacion podria ser el reemplazo del tipo de dato, pasando de trabajar con enteros "int",
// a trabajar con caracteres "char", ya que el programa esta siendo limitado por la memoria y este cambio reduce los bytes
// 4 veces su peso, la otra opcion es el uso de "malloc" ya que permite crear arreglos del tamaño ncecesario en el timepo de
// ejecucion del programa, dependiendo del valor ingresado.
//
// https://platzi.com/blog/que-es-la-memoria-dinamica-funcion-malloc/
// https://es.wikibooks.org/wiki/Programación_en_C/Expresiones
//