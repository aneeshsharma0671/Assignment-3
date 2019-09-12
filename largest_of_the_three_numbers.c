#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y)&&(x>z))
	{
		printf("%d is the lasgest number",x);
	}
	else if((y>x)&&(y>z))
	{
		printf("%d is the largest number",y);
	}
	else if((z>x)&&(z>y))
	{
		printf("%d is the largest number",z);
	}
	else
	{
		printf("error!");
	}
}
