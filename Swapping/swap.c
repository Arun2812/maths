#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter first value=",a);
	scanf("%d",&a);
	printf("Enter second value=",b);
	scanf("%d",&b);
	
	printf("Before swapping a=%d, b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping: a=%d and b=%d",a,b);
	scanf("%d,%d",&a,&b);
	
}
