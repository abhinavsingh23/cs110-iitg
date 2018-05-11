#include<stdio.h>


int *partition(int *arr,int low,int high,int n)
{
int pindex=0;
int end = n-1;
for(int i=0;i<n;)
	{
	  if(arr[i]<low)
		{
		  int temp=arr[i];
		   arr[i++]=arr[pindex++];
		   arr[pindex]=temp;
		   //pindex++;
		}
	else if(arr[i]>high)
		{
		  int temp=arr[i];
		   arr[i]=arr[end--];
		   arr[end]=temp;
		   //pindex++;
	}
else 
   i++;
}


return arr;

}


int main()
{
int arr[100];
int low;
int high;
int n;
printf("enter the number of element:");
scanf("%d",&n);
printf("enter your elements");
for(int i=0;i<n;i++) scanf("%d",&arr[i]);

printf("enter the low and high value");
scanf("%d%d",&low,&high);

partition(arr,low,high,n);

for(int i=0;i<n;i++) printf("%d ",arr[i]);


return 0;
}
