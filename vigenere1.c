#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
 
int main(void)
{	
	int n1,n2,i,ik,it,j,n,a;
	unsigned char *str;
	char *key;
	char *text;
	str=(unsigned char*)malloc(100);
	key=(char*)malloc(100);
	text=(char*)malloc(100);

	printf("enter the key-");
	gets(key);
	printf("enter the text to encrypt-");
	gets(text);
	
	n1=strlen(text);
	n2=strlen(key);

		if(n1>n2)
	     {
		for(i=0;i<n1-n2;i++)
		key[i+n2]=key[i];
	     }
	
		for(j=0;j<n1;j++)
	     {
	    	ik=key[j];
            
	 	  if(ik>64&&ik<91)
	    	{  
		  ik=ik-65;
                }
	 	  if(ik>96&&ik<123)
	        { 
	 	  ik=ik-97;
                }
			  	
		key[j]=ik;	
	 	//printf("%d\n",key[j]);
	     }	  
	
	for(i=0,j=0;i<n1;i++,j++)	
	 {
	   	if((text[i]>64)&&(text[i]<91))	
	      {
		  str[i]=text[i]+key[j];
	      
                	if(str[i]>91)
			 {
		 	  n=str[i]-90;
		  	  str[i]=n+64;
		 	  }
		}
			if((text[i]>96)&&(text[i]<122))  
			{		 
		 	  str[i]=text[i]+key[j];
	         	 
				if(str[i]>122)
		 	  {
			      n=str[i]-122;				
			      str[i]=n+96;
			  }				
		        } 
		
			else
			{
			
			str[i]=text[i];
	 		j--;
			} 
   
                       printf("%c",str[i]);

	        
	  
	}
	printf("\n");
}

