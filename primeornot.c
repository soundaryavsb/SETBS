#include <stdio.h>

int main(void) {
	int n,i,t=0;
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			t++;
			break;
			
		}
	}
	if(t==0)
	{
	printf("prime");
	}
	else
	{
	printf("not prime");
	}

	return 0;
}
