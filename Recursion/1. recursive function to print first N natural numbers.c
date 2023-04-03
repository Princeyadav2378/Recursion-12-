// 1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void N_Natural(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	N_Natural(a);
	return 0;
}
void N_Natural(int n)
{
	if(n>=1)
	{
		N_Natural(n-1);   //Smaller version of recursive function;
		printf(" %d",n);
	}
}
