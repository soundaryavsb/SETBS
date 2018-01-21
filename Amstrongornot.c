#include <stdio.h>
int main(void) {
	int n,rem,s=0,t;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		rem=t%10;
		s=s+rem*rem*rem;
		t=t/10;
	}
	printf("%d\n",s);
	if(s==n)
	{
		printf("yes it is amstrong");
	}
	else
	{
		printf("no it is not a amstrong");
	}
	return 0;
}
