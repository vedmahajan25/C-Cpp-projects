#include<stdio.h>
int IsPrime(int);
int main ()
{
	int n,f;
	printf("Enter a number : ");
	scanf("%d",&n);
	f = IsPrime (n);
	if (f == 1)
		printf("The number is prime");
	else
		printf("The number is not prime");
}


//write any code uo or down


int IsPrime(int n)
{
	int flag =0,i;
	for (i=2; i<n; i++)
	{
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return 1;
	else
		return 0;
}
