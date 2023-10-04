#include<stdio.h>
void main()
{
	int n1=123;
	int n2=n1%10;
	int n3=n1/10;
	int n4=n3%10;
	int n5=n3/10;
	int sum=n2+n4+n5;
	
	printf("\n%d",sum);
}
