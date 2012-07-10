#include<stdio.h>
void main()
{
float change;
int quarter=0,dime=0,nickle=0,penny=0;
int total,q=1,ch;
while(q)
{
printf("O hai! How much change is owned?");
scanf("%f",&change);
change=change*100;
ch=(int)change;
if(ch>0)
{
while(ch>=25)
{
  quarter=ch/25;
  ch=ch%25;
  continue;
}
while(ch>=10)
{
dime=ch/10;
ch=ch%10;
continue;
}
while(ch>=5)
{
nickle=ch/5;
ch=ch%5;
continue;
}
while(ch>=1)
{
penny=ch/1;
ch=ch%1;
continue;
}
q=0;
}
}

printf("The quarter coins are %d",quarter);
printf("\n The dime coins are %d",dime);
printf("\n The nickle coins are %d",nickle);
printf("\n The  penny coins are %d",penny);
total=quarter+dime+nickle+penny;
printf("\n The total coins are %d",total);
}
