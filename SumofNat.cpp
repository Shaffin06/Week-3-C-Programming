/* Sum of 'n' Natural No.s*/
#include <stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter value of n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("Sum of first %d Natural No.s = %d",n,s);
	return 0;
}
