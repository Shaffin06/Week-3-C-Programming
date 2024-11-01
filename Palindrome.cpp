/* Palindrome */
#include <stdio.h>
int main()
{
	int c,n,m,s=0;
	printf("Enter value of n \n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		c=n%10;
		s=s*10+c;
		n=n/10;
	}
	printf("Reverse of %d = %d \n",m,s);
	if(m==s)
	{
		printf("Yes %d is a Palindrome No.",m);
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
