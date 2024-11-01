/* Factorial*/
#include <stdio.h>
int main()
{
	int i,n,s=1;
	printf("Enter value of n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("Factorial of %d = %d",n,s);
	return 0;
}
