/* Fibonacci */
#include <stdio.h>
int main()
{
	int i,n,s,a=0,b=1;
	printf("Enter value of n \n");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=(n-2);i++)
	{
		s=a+b;
		printf("%d\t",s);
		a=b;
		b=s;
	}
	return 0;
}
