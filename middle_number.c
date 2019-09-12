#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y)&&(x>z))
	{
		if(y>z)
		printf("%d is the middle number",y);
		else
		printf("%d is the middle number",z);
	}
	else if((y>x)&&(y>z))
	{
     	if(x>z)
		printf("%d is the middle number",x);
		else
		printf("%d is the middle number",z);
	}
	else if((z>x)&&(z>y))
	{
    	if(y>x)
		printf("%d is the middle number",y);
		else
		printf("%d is the middle number",x);
	}
	else
	{
		printf("error!");
	}
}
