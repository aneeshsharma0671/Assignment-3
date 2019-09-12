#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter two same no. and one different");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y)
	{
		printf("different number is %d",z);
	}
	else if(x==z)
	{
		printf("different number is %d",y);
	}
	else if(y==z)
	{
		printf("different number is",x);
	}
	else
	{
		printf("error!");
	}
}
