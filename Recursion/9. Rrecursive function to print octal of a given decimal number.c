// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
void octal(int);
int main()
{
	int decimal;
	printf("Enter the decimal Number:\n");
	scanf("%d",&decimal);
	octal(decimal);
	return 0;
}
void octal(int decimal)
{
	if(decimal==0)
	{
		return;
	}
	else
	{
		octal(decimal/8);
		printf("%d",decimal%8);
	}
}
