#include <stdio.h>
int main(void) {
	int num,r=0,rem,ori;
	scanf("%d",&num);
	ori=num;
while(num!=0)
{
	rem=num%10;
	r=r*10+rem;
	num/=10;
}
printf("%d\n",r);
if(ori==r)	
{
	printf("palindrome");
}
else
{
	printf("not palidrome");
}
	return 0;
}
