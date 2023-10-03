#include <stdio.h>
//multiplos del 3
//jose miguel ruiz marquez 180200
int main() {
	int i;
	
    for (i = 1; i <= 100; i++) 
	{
        if (i % 3 == 0) 
		{
            printf("%d es multiplo de tres\n", i);
        } 
		else 
		{
            printf("%d no es multiplo de tres\n", i);
        }
    }

    return 0;
}

