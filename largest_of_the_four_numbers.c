#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("enter four numbers");
	scanf("%d%d%d%d",&x,&y,&z,&a);
	if((x>y)&&(x>z)&&(x>a))
	{
		printf("%d is the lasgest number",x);
	}
	else if((y>x)&&(y>z)&&(y>a))
	{
		printf("%d is the largest number",y);
	}
	else if((z>x)&&(z>y)&&(z>a))
	{
		printf("%d is the largest number",z);
	}
		else if((a>x)&&(a>y)&&(a>z))
	{
		printf("%d is the largest number",a);
	}
	else
	{
		printf("error!");
	}
}
