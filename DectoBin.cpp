/* Decimal to Binary */
#include <stdio.h>
int main()
{
	int s=0,n,m,c;
	printf("Enter value of n \n");
	scanf("%d",&n);
	m=n;
	while(n!=1)
	{
		s=s*10+(n%2);
		n=n/2;	
	}
	while(s!=0)
	{
		c=c*10+s%10;
		s=s/10;
	}
	printf("Binary Number of %d = %d",m,c);
	return 0;
}
