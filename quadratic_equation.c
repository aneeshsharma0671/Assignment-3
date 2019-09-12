#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r;
	printf("enter the values of a,b,c for the eq. f(x)=ax^2+bx+c");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		printf("roots are real\n");
		d=sqrt(d);
		r=(-b+d)/2*a;
		printf("%f   ",r);
			r=(-b-d)/(2*a);
		printf("%f   ",r);
		
	}
	else 	if(d==0)
	{
		printf("roots are real and equal, root is");
		r=(-b)/(2*a);
		printf("%f   ",r);
		
	}
	else  if(d<0)
		{
		printf("roots are imaginary with real part equal to %f and imaginary part equal to %f\n",(-b)/(2*a),(sqrt(d))/(2*a));
		
	}
	
	
	
	
	
	
}
