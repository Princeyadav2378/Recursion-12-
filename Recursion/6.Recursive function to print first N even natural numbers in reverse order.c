// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
void N_even_reverse_order(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	N_even_reverse_order(a);
	return 0;
}
void N_even_reverse_order(int n)
{
	if(n>=1)
	printf(" %d",2*n);
	N_even_reverse_order(n-1);
	
}
