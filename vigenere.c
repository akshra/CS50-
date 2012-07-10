#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{

int n1,n2,i,temp,temp1,a;
char *k;
k=(char *)malloc(100);
char *s;
s=(char *)malloc(100);
char *ch;
ch=(char *)malloc(100);
unsigned char *cipher;
cipher=(unsigned char *)malloc(100);
printf("Enter the string for key: ");
gets(k);
n1=strlen(k);
printf("Enter the msg u want to Encrypt:");
gets(s);
n2=strlen(s);
for(i=0;i<n1;i++)
{
	temp=k[i];
	if(temp>=65&&temp<=90)
	{
		ch[i]=temp-65;
	}
	else 
	{
		ch[i]=temp-97;
	}

}
for(i=0;i<n1;i++)
{
	printf("%d\n",ch[i]);
}

for(i=0;i<n2;i++)
{
	if(i!=n1)
	{
		temp1=s[i];
		//printf("%d\n",temp1);
		if((temp1 >= 65&&temp<=90)||(temp>=97&&temp<=122))
		{	
			cipher[i]=ch[i]+temp1;
			if(cipher[i]>122)
			{
				a=cipher[i]-122;
				//printf("%d\n",a);
				cipher[i]=96+a;
				
		
			}
			else if(cipher[i]>90&&cipher[i]<=97)
			{
				a=cipher[i]-90;
				cipher[i]=64+a;
			}
			printf("%c",cipher[i]);
		}
		else
		{
			printf("%c",s[i]);
			cipher[i]=s[i];
		}


	}
	else
	{
		for(i=0;i<n1;i++)
		{
			ch[i+n1]=ch[i];
		}
			
	       temp1=s[i];
		//printf("%d\n",temp1);	
		cipher[i]=ch[i]+temp1;
		if(cipher[i]>122)
		{
			a=cipher[i]-122;
			//printf("%d\n",a);
			cipher[i]=96+a;
				
		
		}
		else if(cipher[i]>90&&cipher[i]<=97)
		{
			a=cipher[i]-90;
			cipher[i]=64+a;
		}
		else
		{
			printf("%c",s[i]);
			cipher[i]=s[i];
		}
		
	printf("%c",cipher[i]);
	}
		
}
					
}


	

