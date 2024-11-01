/* Binary to Decimal */
#include <stdio.h>
#include <math.h>
int main()
{
	int s=0,i,n,m,y,c=0,x;
	printf("Enter value of n \n");
	scanf("%d",&n);
	m=n;
	y=n;
	while(n!=0)
	{
		c++;
		n=n/10;	
	}
	while(m!=0)
	{
		for(i=0;i<c;i++)
		{
			x=m%10;
			s=s+x*pow(2,i);
			m=m/10;
		}
	}
	printf("Decimal Number of %d = %d",y,s);
	return 0;
}
