#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	printf("numbers in descending order are\n");
	if(x>y)
	{
		printf("%d  %d",x,y);
	}
	else if(y>x)
	{
		printf("%d  %d",y,x);
	}
	else
	{
		printf("error!");
	}
}
