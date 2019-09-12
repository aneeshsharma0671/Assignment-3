#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the value of a,b,c for the equation ax+by+c=0 \n");
	scanf("%f%f%f",&a,&b,&c);
	if (b==0)
	{
		printf("slope is infinity\n");
	}
	else
	{
     	printf("slope of line is%f \n",-a/b);
    }
	if (-b/a==0)
	{
		printf("it is vertical");
	}
	else
	{
		printf("it is not vertical");
	}
}

