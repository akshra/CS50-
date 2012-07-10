#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
//memory allocation
char *s;
s=(char *)malloc(100);
char *s1;
s1=(char *)malloc(100);
int temp=0,k,i,a,q=1;
while(q)
{
	char *p;
	p=(char *)malloc(100);
	printf("Enter the value of key : ");
	gets(p);
	k=atoi(p);
	if(k>0)
	{
		printf("Enter the string:\n");
		gets(s);
		int n=strlen(s);
		//printf("%d",n);
		//printf("\n");
			for(i=0;i<n;i++)
			{
				temp=s[i];
				if((temp>=65&&temp<=90)||(temp>=97&&temp<=122))
				{
					temp=temp+k;
					if(temp>122)
					{
						a=temp-122;
						temp=96+a;
					}
					if(temp>90&&temp<=97)
					{
						a=temp-90;
						temp=64+a;
					}
				}
				s1[i]=temp;
			}
			for(i=0;i<n;i++)
			{
			printf("%c",s1[i]);
			}
			printf("\n");
		q=0;
	}

}
}



