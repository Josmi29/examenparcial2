#include <stdio.h>
//codigo que te dice si un a�o es bisiesto o no
int main(){
	int a=0;
	
	printf("introduzca a�o:\n");
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
