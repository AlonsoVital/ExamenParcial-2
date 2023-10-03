#include <stdio.h>

int main()
{
	//Multiplo de una serie de numeros
	
	int i;
	printf("Escribe un numero del 1 al 100 para verificar que si es multiplo de 3: ");
	scanf("%d", &i);
	
	while(i<=100)
	{
		if(i%3==0)
		{
			printf("%d es multiplo de 3", i);
		}
			
		else
		{
			printf("%d no es multiplo de 3", i);
		}
			
		break;		
	}
	
	return 0;
}
