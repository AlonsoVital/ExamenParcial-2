#include <stdio.h>

int main()
{
	//Intercambio de valores
	
	int v1, v2, v3, cam;
	
	printf("Escribe el primer numero: ");
	scanf("%d", &v1);
	printf("Escribe el segundo numero: ");
	scanf("%d", &v2);
	printf("Escribe el tercer numero: ");
	scanf("%d", &v3);
	
	printf("\n");
	
	cam=v1;
	v1=v2;
	v2=v3;
	v3=cam; 
	
	printf("Intercambio de valores\n");
	printf("\n");
	
	printf("Ahora el primer numero es: %d\n", v1);
	printf("Ahora el segundo numero es: %d\n", v2);
	printf("Ahora el tercer numero es: %d\n", v3);
	
	return 0;
}
