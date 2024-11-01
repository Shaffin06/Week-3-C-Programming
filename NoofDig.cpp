/* Sum of 'n' Natural No.s*/
#include <stdio.h>
int main()
{
	int c=0,n,m;
	printf("Enter value of n \n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		c++;
		n=n/10;	
	}
	printf("No. of Digits in %d = %d",m,c);
	return 0;
}
