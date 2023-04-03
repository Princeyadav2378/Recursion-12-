//3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void N_Odd(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf(" %d",&a);
	N_Odd(a);
	return 0;
}
void N_Odd(int n)
{
	if(n>1)
	N_Odd(n-1);
	printf(" %d",2*n-1);

}
