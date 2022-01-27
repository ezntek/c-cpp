#include <iostream>
#include <string.h>

using namespace std;

int main() {

	printf("welcome to calculator...\n ");
	char oper;
	float val1;
	float val2;
	float result;

	printf("enter an operator + - x / "); 
	cin >> &oper; 

	printf("enter number 1  ");
	scanf("%f", &val1);

	printf("enter number 2  ");
    scanf("%f", &val2);
  
	cout << endl;

	if (oper == '-') {
		result = val1 - val2;
		printf("result: %0.0f\n",result);
	} else if (oper == '+') {
		result = val1 + val2;
		printf("result: %0.0f\n",result);
	} else if (oper == 'x') {
		result = val1 * val2;
		printf("result: %0.0f\n",result);
	} else if (oper == '/') {
		result = val1 / val2;
		printf("result: %0.5f\n",result);
	} else {
		cout << "enter a valid operator to use..."; cout << endl; 
	}
	
	
	
	
	

	return 0;
}
