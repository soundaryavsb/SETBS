#include <stdio.h>
int main(void) {
	int a,b,t;
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\na=%d,b=%d",a,b);
	return 0;
}
