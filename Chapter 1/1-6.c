#include <stdio.h>

int main(void)
{	
	printf("Enter a character: ");
	printf("The value of expression \"getchar() != EOF\" is %d.\n", getchar() != EOF);
}