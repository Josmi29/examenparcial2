#include <stdio.h>

int main(){
	int v1, v2, v3;
	
	printf("dame el valor del primer v:");
	scanf("%d", &v1);
	
	printf("dame el valor del segundo v:");
	scanf("%d", &v2);
	
	printf("dame el valor del tercer v:");
	scanf("%d", &v3);
	
	printf("valores originales: %d, %d, %d\n", v1, v2, v3);
	
	v1=v2;
	v2=v3;
	v3=v1;
	
	printf("valores nuevos: %d, %d, %d", v1, v2, v3);
	
	return 0;
}
