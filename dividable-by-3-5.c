#include<stdio.h>

void max(int n)
{
	if(n%3 == 0 && n%5 ==0)
	{
		printf("Number is dividable by 3 & 5");
	}
	else
	{
		printf("Number is not dividable by 3 & 5");
	}
}

main()
{
	int a;
	printf("Enter Number=");
	scanf("%d",&a);
	
	max(a);
}