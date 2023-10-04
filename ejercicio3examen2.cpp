#include <stdio.h>
//codigo que genera una piramide en n numero de lineas
//jose miguel ruiz marquez 180200
int main() 
{
    int altura;

    printf("escribe la altura de tu piramide: ");
    scanf("%d", &altura);

    for (int i=1;i<=altura;i++) 
	{
        for (int j=1;j<=i;j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
