#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,delta,x1,x2;
	printf("donnez la valeur de a: \n");
	scanf("%f",&a);
	printf("donnez la valeur de b: ");
	scanf("%f",&b);
	printf("donnez la valeur de a: ");
	scanf("%f",&c);
	
	delta=b*b-4*a*c;
	
	if (delta>0)
	{
		x1=-b-sqrt(delta)/2*a;
		x2=-b+sqrt(delta)/2*a;
		printf("La solution est: %.2f et %.2f",x1,x2);
	}
	else if (delta=0)
	{
		x1==x2;
	x1=-b/2*a;
	printf("La solution est: %.2f",x1);
}
	else
	printf("pas de solution");
}


	
