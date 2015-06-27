#include <stdio.h>

int main(void)
{
	int c, count = 0;

	while((c = getchar()) != EOF)
	{	
		
		if(c != ' ')
		{	
			if(count >= 1)   // appropriating 
				printf(" "); // number of blanks to a single blank
			putchar(c);
			count = 0;
		}

		if(c == ' ')
			count++; // count the number of blanks

	}

}