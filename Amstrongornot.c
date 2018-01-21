#include <stdio.h>

int main(void) {
	int n,rem,s=0,t;
	scanf("%d",&n);
	n==t;
	while(n>0)
	{
		rem=n%10;
		s=s+rem*rem*rem;
		n=n/10;
	}
	printf("%d",s);
	if(s==t)
	{
		printf("yes it is amstrong");
	}
	else
	{
		printf("no it is not a amstrong");
	}
	
	// your code goes here
	return 0;
}
