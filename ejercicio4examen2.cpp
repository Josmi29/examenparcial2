#include <stdio.h>
//programa que intercmbia valores
//jose miguel ruiz marquez 180200
int main() {
    int v1, v2, v3;

    printf("Ingresa el valor del primer num: ");
    scanf("%d", &v1);

    printf("Ingresa el valor del segundo num: ");
    scanf("%d", &v2);

    printf("Ingresa el valor del tercer num: ");
    scanf("%d", &v3);

    printf("Valores originales: %d, %d, %d\n", v1, v2, v3);

 
    int temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = temp;

    printf("valores intercambiados: %d, %d, %d\n", v1, v2, v3);

    return 0;
}
