#include <stdio.h>

int main() {

	printf("welcome to calculator...");
	char operator;
	double val1;
	double val2;
	double result;

	printf("enter an operator + - x / ");
	scanf("%c", &operator);

	printf("enter number 1  ");
	scanf("%lf", &val1);

	printf("enter number 2  ");
        scanf("%lf", &val2);
  
	printf("\n");
	switch(operator) {
		case '-':
			result = val1 - val2;
			printf("result: %0.1lf\n",result);
			break;
		case '+':
			result = val1 + val2;
			printf("result: %0.1lf\n",result);
			break;
		case 'x':
			result = val1 * val2;
			printf("result: %0.1lf\n",result);
			break;
		case '/':
			result = val1 / val2;
			printf("result: %0.5lf\n",result);
                        break;
		default:
			printf("you made a mistake, try again...\n");
	}


	return 0;
}
