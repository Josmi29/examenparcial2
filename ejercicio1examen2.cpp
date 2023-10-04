#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//jose miguel ruiz marquez 180200
//programa que hace operaciones random
int main() {
    srand(time(NULL));

    int repeticiones = 2;  
    int opcion;
    
    do {
        opcion = rand() % 5 + 1;
        float num1 = (float)(rand() % 100 + 1);
        float num2 = (float)(rand() % 100 + 1);
        float resultado;

        for (int i = 0; i < repeticiones; i++) {
            switch (opcion) {
                case 1:
                    resultado = num1 + num2;
                    printf("suma: %f + %f = %f\n", num1, num2, resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("resta: %f - %f = %f\n", num1, num2, resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("multiplicacion: %f * %f = %f\n", num1, num2, resultado);
                    break;
                case 4:
                    resultado = num1 / num2;
                    printf("division: %f / %f = %f\n", num1, num2, resultado);
                    break;
                case 5:
                    printf("fin de las operaciones\n");
                    break;
                default:
                    break;
            }
        }
    } while (opcion != 5);

    return 0;
}
