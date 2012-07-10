#include<stdio.h>
void main()
{
long long number;
int i,a[15],sum=0,sum1=0,b[15];
printf("Enter the credit card number");
scanf("%lluLL",&number);

if(number>1000000000000&&number<1000000000000000)
{
	for(i=0;i<15;i++)
	{
		a[i]=number%10;
		number=number/10;

		
	}

	for(i=0;i<15;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0;i<15;i=i+2)
	{
		sum=sum+a[i];
		
	}
	for(i=1;i<15;i=i+2)
	{
		b[i]=a[i]*2;
		if(b[i]>9)
		{
			b[i]=b[i]-9;
		}
		sum1=sum1+b[i];
	}


	sum1+=sum;
	if(sum1%10==0)
	{
		printf("valid Number");
		printf("\n");

			
			if(a[i]==4)
			{
			printf("Visa");
			}
			else if(((a[14]==3)&&(a[13]==4))|| ((a[14]==3)&&(a[13]==7)))
			{
			printf("Amex");
			}
			else if((a[14]==5)&&((a[13]==1)||(a[13]==2)||(a[13]==3)||(a[13]==4)))
			{
			printf("Master Card");	
			}
			else
			{
			printf("invalid1");
			}
			
		
	}
	else
	{
	printf("invalid2");
	}
	printf("\n");
}
else
{
printf("Invalid Number");
}
}
	

