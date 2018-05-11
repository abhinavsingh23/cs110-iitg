#include<stdio.h>

void swap(int *a1,int *a2)
{
int temp=*a1;
*a1=*a2;
*a2=temp;
}

int partition(int *a,int start,int end)
{
// select last element as pivot
int pivot=*(a+end);
//select start as partition index
int pindex=start;

for(int i=start;i<end;i++)
	{
	 if(*(a+i)<=pivot){
		swap((a+i),(a+pindex));
	pindex++;
	}
}
swap((a+pindex),(a+end));

return pindex;
}

int quicksort(int *a,int start,int end)
{
	if(start<end){
	int pindex=partition(a,start,end);
	quicksort(a,start,pindex-1);
	quicksort(a,pindex+1,end);
}
}

int main()
{
int a[20] = {1, 3, 5, 7, 8, 0, 9, 6,4, 2, 6, 0, 2, 9, 3, 2, 8, 8, 7, 7};
quicksort(a,0,19);
printf("SORTED ARRAY IS:\n");
for(int i=0;i<20;i++)
   printf("%d ",*(a+i));

return 0;
}
