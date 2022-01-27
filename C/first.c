#include <stdio.h>
#include <stdlib.h>

int 
main() 

{
	// the start of the so so painful journey!!

	printf("hello, world?\n");
	char text[] = "THIS IS IN A CHAR";
	int x = 1234124;

	printf("char: %s int: %d\n", text, x);

	char scan[10];

	printf("yes or no??:  ");
	scanf("%s", scan);

	printf("you said %s...\n", scan);

	char *str = malloc(4);

	str[1] = 'A';
	str[2] = 'R';
	str[3] = 'S';
	str[4] = 'E';

	printf("malloced: %s", *str);

	free(str);

	return 0;

}

