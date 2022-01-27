#include <stdlib.h>
#include <stdio.h>

int 
main()
{
	char fil[] = "test.txt";

	FILE *filereadfrom = fopen(fil, "r");
	char buffer[255];
	fgets(buffer, 255, filereadfrom);
	printf("%s", buffer);
	fclose(filereadfrom);
	return 0;

}
