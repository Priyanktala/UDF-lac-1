#include<stdio.h>

void cube(int n)
{
	n=n*n*n;
	printf("cube of entered number=%d",n);
}

main()
{
	int a;
	printf("Enter Number=");
	scanf("%d",&a);
	
	cube(a);
}