#include <stdio.h>

int main(void)
{
	int c, pc = EOF;

	while((c = getchar()) != EOF)
	{	
		
		if(c == ' ')
		{	
			if(pc != ' ')   	// Logic: Don't copy input character when two blanks are consecutive
				putchar(c);
		}

		if(c != ' ')
			putchar(c);

		pc = c;

	}

}