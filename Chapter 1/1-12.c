#include <stdio.h>

int main(void)
{
	int c, pc = EOF;

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c !='\n')
			putchar(c);
		else
			if(pc != ' ')
				putchar('\n');

		pc = c;

	}
}