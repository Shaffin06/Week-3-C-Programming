/* Sum of First and Last Dig */
#include <stdio.h>
#include <math.h>
int main()
{
	int s=0,i,n,c,x;
	printf("Enter value of n \n");
	scanf("%d",&n);
	x=n%10;
	while(n!=0)
	{
		c=n%10;
		n=n/10;
	}
	printf("Sum of First and Last Digit = %d",x+c);
	return 0;
}
