#include<stdio.h>
#include<math.h>
void powr(int a, int b)
{
	printf("pow(%d,%d)=%d",a,b,(a,b));
}
void sum(int a, int b)
{
	printf("sum(%d,%d)=%d",a,b,a+b);
}
void sub(int a, int b)
{
	printf("sub(%d,%d)=%d",a,b,a-b);
}  
void mul(int a, int b)
{
	printf("mul(%d,%d)=%d",a,b,a*b);
}
void div(int a, int b)
{
	printf("div(%d,%d)= %d",a,b,a/b);
}
int main()
{
	int a,b,c;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf(" 1.sum\n 2.sub\n 3.mul\n 4.div\n 5.pow\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch (c)
		{
			case 1:
				sum(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				div(a,b);
				break;
			case 5:
				powr(a,b);
				break;
		}
}
