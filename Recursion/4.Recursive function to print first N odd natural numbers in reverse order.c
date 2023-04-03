// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void N_odd_Natural(int);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	N_odd_Natural(a);
	return 0;

}
void N_odd_Natural(int n)
{
	if(n>=1)
	printf(" %d",2*n-1);
	N_odd_Natural(n-1);
}
