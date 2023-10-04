#include <stdio.h>
//codigo que genera una piramide en n numero de lineas
//jose miguel ruiz marquez

int main(){
	int i, j, lineas;
	
	printf("dime un num. de lineas para la piramide: ");
	scanf("%d", &lineas);
	
	for(i=1;i<=lineas;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ", j);
		printf("\n");
	}
	
	
	
	return 0;
}
