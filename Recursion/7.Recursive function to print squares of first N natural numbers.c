// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
void print_square(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	print_square(a);
	return 0;
}
void print_square(int n)
{
	if(n>1)
	print_square(n-1);
	printf(" %d",n*n);
}
