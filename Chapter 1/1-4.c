#include <stdio.h>

int main(void)
{
	// print Celsius -Fahrenheit table

	float fahr, celsius;
	int lower = 0, upper = 300, step = 20;
	
	celsius = lower; // int will be converted to float

	printf("Celsius\tFahrenheit\n");

	while(celsius <= upper)
	{	

		fahr = (9.0/5.0 * celsius) + 32;;
		printf("%7.1f\t%10.0f\n", celsius, fahr);
		celsius += step;

	}

}