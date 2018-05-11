#include<stdio.h>

int ischeck(int *arr1,int *arr2,int a,int b)
{
int i,j;
for(i=0;i<b;i++)
  {
    for(j=0;j<a;j++)
    {
      if(*(arr2+i)==*(arr1+j))
	break;
    }
 if(j==a)
	return 0;

  }
return 1;
}

int main()
{
int a,b;
int arr1[100],arr2[100];
printf("NUMBER OF ELEMENT IN A: ");
scanf("%d",&a);
printf("NUMBER OF ELEMENT IN B: ");
scanf("%d",&b);
printf("ELEMENTS OF A: ");
for(int i=0;i<a;i++) 
	scanf("%d",(arr1+i));

printf("ELEMENTS OF B: ");
for(int i=0;i<b;i++) 
	scanf("%d",(arr2+i));
if(ischeck(arr1,arr2,a,b))
	printf("YES\n");
else printf("NO\n");


return 0;
}
