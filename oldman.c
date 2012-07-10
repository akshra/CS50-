#include<stdio.h>
#include<string.h>
#include<cs50.h>

void main()
{
string number[]={"one","two","three","four","five","six","seven","eight","nine","ten"};
string name[]={"on my thumb","on my shoe","on my knee","on my door","on my hive","on my sticks","up in heaven","on my gate","on my spine","once again"};
int i;
for(i=0;i<10;i++)
{
printf("This old man,he played %s\n He played knick-Knack %s\n Knick-knack paddywhack,give your dog a bone\n This old man came rolling home\n",number[i],name[i]);
}
}
