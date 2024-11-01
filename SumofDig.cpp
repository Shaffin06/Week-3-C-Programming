/* Sum of Digits */
#include <stdio.h>
int main()
{
	int s=0,n,m;
	printf("Enter value of n \n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		s=s+(n%10);
		n=n/10;	
	}
	printf("Sum of Digits in %d = %d",m,s);
	return 0;
}
