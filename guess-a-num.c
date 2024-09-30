#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int getIntInput();
void checkNumber(int r, int num);

bool correct;

int main()
{
	srand(time(NULL));
	int r = rand() % 11;
	do
	{
		int num = getIntInput();
		checkNumber(num, r);
	}
	while(correct != true);
	return 0;
}

void checkNumber(int r, int num)
{
	if (num < r)
	{
		correct = false;
		printf("Go for lower number\n");
	}
	else if(num > r)
	{
		correct = false;
		printf("Go for higher number\n");
	}
	else
	{
		correct = true;
		printf("Correct, the number is: %d\n", r);
	}
}


int getIntInput()
{
	int n;
	printf("Guess the Number between 1 to 10: ");
	scanf("%d", &n);
	return n;
}
