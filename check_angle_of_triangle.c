#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the sides of the triangle");
	scanf("%f%f%f",&a,&b,&c);
	a=a*a;
	b=b*b;
	c=c*c;
	if(a==b+c)
	{
		printf("angle A is of 90 dergree");
	}
	else
	{
		printf("angle a  is not of 90 degree");
	}
	
}

