#include <stdio.h>

int main()
{
	//Año bisiesto
	
	int a=0;
	
	printf("Introduzca año: ");
	scanf("%d", &a);
	
	if ((a % 4 == 0) && (a % 100 != 0) || a % 400 == 0)
	{
		printf("Es bisiesto");
	}
	
	else
	{
		printf("No es bisiesto");
	}
	
	return 0;
}
