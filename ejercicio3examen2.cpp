#include <stdio.h>
//codigo que genera una piramide en n numero de lineas
//jose miguel ruiz marquez 180200
int main() 
{
    int altura;

    printf("escribe la altura de tu piramide(menos de 60):");
    scanf("%d", &altura);
	
	if(altura <= 60)
	{
    	for (int i=1;i<=altura;i++) 
		{
        	for (int j=1;j<=i;j++) 
			{
            	printf("%d ", j);
        	}
        printf("\n");
    	}
	} 
	else
	{
		printf("muy grande :(");
	}
	
    return 0;
}
