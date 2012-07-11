#include<stdio.h>

	void main()
{	
	int l,o,p,a,b,c,d,add,q,i; 									
	printf("M tO M-");
	scanf("%d",&a);
	
	printf("\nM tO F-");
	scanf("%d",&b);
	
	printf("\nF tO M-");
	scanf("%d",&c);
	
	printf("\nF tO F-");
	scanf("%d",&d);
	
//sum of all views	
	add=a+b+c+d;	

//calculate no of $ in each line	
	q=(a*80)/add;
	l=(b*80)/add;	
	o=(c*80)/add;	
	p=(d*80)/add;	
	
	printf("M to F-");
	for(i=0;i<=l;i++)	
	{
	printf("$");
	}

	
	printf("\nM to M-");
	for(i=0;i<=q;i++)	
	{
	printf("$");
	}

	
	printf("\nF to M-");
	for(i=0;i<=o;i++)	
	{
	printf("$");
	}
	
	
	printf("\nF to F-");
	for(i=0;i<=p;i++)	
	{
	printf("$");
	}
	printf("\n");
}
