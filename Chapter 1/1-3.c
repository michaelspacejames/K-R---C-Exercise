#include <stdio.h>

int main(void)
{
	// print Fahrenheit - Celsius table

	float fahr, celsius;
	int lower = 0, upper = 300, step = 20;
	
	fahr = lower; // int will be converted to float

	printf("Fahrenheit\tCelsius\n");

	while(fahr <= upper)
	{	

		celsius = 5.0/9.0 * (fahr - 32);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr += step;

	}

}