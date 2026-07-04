#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasMes;

    printf("ingrese el dia: ");
    scanf("%d", &dia);
    printf("ingrese el mes: ");
    scanf("%d", &mes);
    printf("ingrese el ano: ");
    scanf("%d", &ano);

    //determinar la cantidad de dias del mes //
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasMes = 30;
    } else if (mes == 2) {
        //verificar si es año bisiesto //
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            diasMes = 29;
        } else {
            diasMes = 28;
        }
    } else {
        diasMes = 31;
    }

    //calcular el dia sguiente//
    dia++;

    if (dia > diasMes) {
        dia = 1;
        mes++;

        if (mes > 12) {
            mes = 1;
            ano++;

        }
    }

    printf("La fecha del dia siguiente es: %02d/%02d/%d\n", dia, mes, ano);

    return 0;

}