//  5. Write a recursive function to print first N even natural numbers

#include<stdio.h>
void N_even_Natural(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	N_even_Natural(a);
	return 0;
}
void N_even_Natural(int n)
{
	if(n>1)
	N_even_Natural(n-1);
	printf(" %d",2*n);
}

