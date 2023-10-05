#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//Operaciones aleatorias
	
	int opcion, num1, num2;
	int suma, resta, multi, div;
	
	srand(time(NULL));
	while(true)
	{
		opcion = rand()%(5)+1;
		num1 = rand()%(9)+1;
		num2 = rand()%(9)+1;
		
		switch(opcion)
		{
			case 1:
				suma = num1+num2;
				printf("%d + %d = %d\n", num1, num2, suma);
				break;
			case 2:
				resta = num1-num2;
				printf("%d - %d = %d\n", num1, num2, resta);
				break;
			case 3: 
				multi = num1*num2;
				printf("%d * %d = %d\n", num1, num2, multi);
				break;
			case 4: 
				div = num1/num2;
				printf("%d / %d = %d\n", num1, num2, div);
				break;
			case 5:
				printf("Fin del programa");
				//break;
				return 0;
		}
	}
	return 0;
}
