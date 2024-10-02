#include<stdio.h>
#include<stdlib.h>

float getNumber();
char getOperator();
void calculate(float num, char op);
void printResult(float result);

float result = 0;
char op = '+';

int main()
{
	do
	{
		float num = getNumber();
		calculate(num, op);
		op = getOperator();
	}
	while(op != '=');
	printResult(result);
	return 0;
}

float getNumber()
{
	float n;
	printf("Enter a Number: ");
	scanf("%f",&n);
	return n;
}

char getOperator()
{
	char i;
	printf("Operator: ");
	scanf(" %c",&i);
	return i;
}

void calculate(float num, char op)
{
	switch(op)
	{
		case '+':
			result = result + num;
			break;
		case '-':
			result = result - num;
			break;
		case '*':
			result = result * num;
			break;
		case '/':
			result = result / num;
			break;
		default:
			printf("Invalid Operator!\n");
			exit(0);
	}
}

void printResult(float result)
{
	if(result == (int)result)
	{
		printf("Result: %.0f\n", result);
	}
	else
	{
		printf("Result: %.5f\n",result);
	}
}
