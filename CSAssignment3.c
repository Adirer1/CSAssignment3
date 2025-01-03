

#include <stdio.h>

void decimal_to_binary(int num);
int number_of_bin_ones(int num);
int diff(int num);
int bigger_rev(int n);

void main()
{
	int n;

	printf("Enter a number to represent as binary:");
	scanf_s("%d", &n);
	decimal_to_binary(n);

	printf("\nEnter a number to count how many 1's in binary:");
	scanf_s("%d", &n);
	printf("%d",number_of_bin_ones(n));

	printf("\nEnter a number to calculate the difference:");
	scanf_s("%d", &n);
	printf("%d", diff(n));
	
	printf("\nEnter number for the size of the series (n):");
	scanf_s("%d", &n);
	bigger_rev(n);

}

void decimal_to_binary(int num)
{
	if (num < 2)
	{
		printf("%d", num);
	}
	else 
	{
		decimal_to_binary(num / 2);
		printf("%d", num % 2);
	}
	//ChatGPT feedback: Ilt really helped me understand the logic
	// and specifically why I should print after the recursion returns.
}

int number_of_bin_ones(int num)
{
	int temp;
	if (num < 2)
	{
		return num;
	}
	else
	{
		temp = number_of_bin_ones(num / 2);
		return (temp + (num % 2));
	}
	//I didn't need ChatGPT for this.
}

int diff(int num)
{
	int temp;
	if (num < 10)
	{
		if ((num % 2) == 0)
		{
			return num;
		}
		else
		{
			return (num * (-1));
		}
	}
	else
	{
		temp = diff(num / 10);
		if ((num % 10) % 2 == 0)  
		{
			return (temp + (num % 10));  
		}
		else
		{
			return (temp - (num % 10));  
		}
	}
	//I didn't need ChatGPT for this.
}

int bigger_rev(int n)
{

	int currentNum;
	int biggestNum;
	if (n < 1)
	{
		return 0;
	}
	scanf_s("%d", &currentNum);
	biggestNum = bigger_rev(n - 1);

	if (currentNum > biggestNum)
	{
		biggestNum = currentNum;
		printf("[%d]\n", currentNum);	
	}
	return biggestNum;
	//ChatGPT was largely useless for this question, it kept trying to change the code
	//based on a wrong interpretation of the question asked. 
}