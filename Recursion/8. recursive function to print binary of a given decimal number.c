// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary_to_decimal(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	binary_to_decimal(a);
	return 0;
}
void binary_to_decimal(int n)
{
	if(n==1)
	{
		printf("1");
	}
	else
	{
		binary_to_decimal(n/2);
		printf("%d",n%2);
	}
}

