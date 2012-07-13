#include<stdio.h>
void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);
int main()
{
int n,ch,temp,i,j;
int a[20];
int mid;
printf("How many elements u want:");
scanf("%d",&n);
printf("Enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
printf("Enter your choice:\n");
scanf("%d",&ch);
printf("1.Bubble Sort\n");
printf("2.Selection Sort\n");
printf("3.Merge Sort\n");
switch(ch)
{
	case 1:
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	break;
	case 2:
	for(i=0;i<=n-1;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");	
	break;
	case 3:
	partition(a,0,n-1);
	printf("After merging");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}			
	break;
	default:
	printf("u have entered the wrong choice");
}
return 0;
}
void partition(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;
	partition(arr,low,mid);
	partition(arr,mid+1,high);
	mergeSort(arr,low,mid,high);
	}
}
void mergeSort(int arr[],int low,int mid,int high)
{
int i,m,k,l,temp[20];

l=low;
i=low;
m=mid+1;
while((l<=mid)&&(m<=high))
{
	if(arr[l]<=arr[m])
	{
		temp[i]=arr[l];
		l++;
	}
	else
	{
		temp[i]=arr[m];
		m++;
	}
	i++;
}
if(l>mid)
{
	for(k=m;k<=high;k++)
	{
		temp[i]=arr[k];
		i++;
	}
}
else
{
	for(k=l;k<=mid;k++)
	{
		temp[i]=arr[k];
		i++;
	}

}
for(k=low;k<=high;k++)
{
	arr[k]=temp[k];
}
}



