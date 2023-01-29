#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter the a number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n afterswapping a=%d",a);
	printf("\n afterswapping b=%d",b);
	return 0;}                                                                                                                                                                                                                                                                 
