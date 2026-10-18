#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 1;
	int a = 1;
	for (i = 1; i <= n; i++)
	{
		 a *= i ;

	}
	printf("%d", a );
		return 0;
}