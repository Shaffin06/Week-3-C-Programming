/* Multiplication Table*/
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter value of n \n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d \n",n,i,n*i);
	}
	return 0;
}
