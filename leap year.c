#include<stdio.h>
int main()
{
	int a;
	printf("enter the year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("the given number is an leap year.");
	}
	else
	{
		printf("the given year is not a leap year.");
	}
}
