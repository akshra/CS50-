#include<stdio.h>

void main()
{
int day,pennis,i;
long int amount;
int q=1,p=1;
while(q)
{
printf("enter the days in a month: \n");
scanf("%d",&day);
  if(day>27&&day<32)
  {
  while(p)
  {
  printf("Enter the penny for the first day:\n");
  scanf("%d",&pennis);

    if(pennis>0)
    {
    amount=pennis;
      for(i=1;i<day;i++)
      {
	amount=amount*2;
      }
      amount=amount+pennis;
    printf("the amount is %ld: \n",amount);
    q=0;
    p=0;
    }
  }
    }
   }
   
  }

