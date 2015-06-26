#include <stdio.h>

int main(void)
{
	// print Fahrenheit - Celsius table

	float fahr;

	printf("*****************************\n*  Fahrenheit  *  Celsius   *\n*****************************\n");

	for(fahr = 300; fahr >= 0; fahr -= 20)
	{	

		printf("*   %9.0f  *  %7.1f   *\n", fahr, 5.0/9.0 * (fahr - 32));

	}

	printf("*****************************\n");

}