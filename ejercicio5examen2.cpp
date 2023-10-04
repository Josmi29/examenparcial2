#include <stdio.h>
//codigo que te dice si un año es bisiesto o no
//jose miguel ruiz marquez 180200
int main(){
	int a=0;
	
	printf("introduzca año:\n");
	scanf("%d", &a);
	
	if( (a % 4 == 0) && (a % 100 != 0) || a % 400 == 0 )
	{
		printf("si es bisiesto:)");
	} 
	else 
	{
		printf("no es bisiesto:0");
	}
	
	return 0;
}
