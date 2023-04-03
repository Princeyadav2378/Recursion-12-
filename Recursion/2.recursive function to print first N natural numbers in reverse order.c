// 2. Write a recursive function to print first N natural numbers in reverse order
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
	printf(" %d",n);
	N_Natural(n-1);	
}
