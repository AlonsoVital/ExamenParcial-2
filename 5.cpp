#include <stdio.h>

int main()
{
	//Mitad de piramide de numeros 
	
	int i, j, k, lin;
	
	printf("Numero de lineas en la piramide: ");
	scanf("%d", &lin);
	
	for(i=1; i<=lin; i++)
	{
		for(j=1; j<=lin; j++)
		{
			printf("");
		}
		
		for(k=1; k<=i; k++)
		{
			printf("%d ", k);
		}
		
		printf("\n");
	}
	
	return 0;
}
