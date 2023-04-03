// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>
void reverse_number(int);
int main()
{
	int a=10;
	reverse_number(10);
	return 0;
}
void reverse_number(int n)
{
	if(n>1)
	 reverse_number(n-1);
	 printf(" %d",n);
}
