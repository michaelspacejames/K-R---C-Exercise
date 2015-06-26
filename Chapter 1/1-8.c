#include <stdio.h>

int main(void)
{	
	int c, nblanks = 0, ntabs = 0, nnewlines = 0;

	while((c = getchar()) != EOF) // Use Ctrl+D for EOF.
	{
		if(c == '\n')
			++nnewlines;
		if(c == '\t')
			++ntabs;
		if(c == ' ')
			++nblanks;	
		
	}

	printf("Number of blanks: %d\nNumber of tabs: %d\nNumber of new lines: %d\n", nblanks, ntabs, nnewlines);
}