#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*void sort(int *p,int n)
{
int i,j,temp;
for(i=0;i<n;i++)
    {
    for(j=0;j<n-1;j++)
        {
        if(p[j]>p[j+1])
            {
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
            }
        }
    }

}*/

int sum(int i,int *p,int n)
{
int total=0;
int arr[500],j;
int k=i;
//printf(" i is :%d\n",i);

for(j=0;j<n;j++)
    {
     if((k%2)==1)
     arr[j]=1;
else
    arr[j]=0;

    k=k/2;
    //printf("arr[%d]  is %d\n",j,arr[j]);
}
//printf("\n");

for(j=0;j<n;j++)
    {
        if(arr[j]==1)
    total=total+arr[j]*(*(p+j));
    }
    //printf("total is %d\n",total);
return (total);
}

void print(int i,int *p,int n)
{
int j,bin[500];
int k=i;
for(j=0;j<n;j++)
    {
    if((k%2)==1)
        bin[j]=1;
    else
        bin[j]=0;
        k=k/2;
     }

     for(j=0;j<n;j++)
        {
        if(bin[j]==1)
            //printf("uid for value %d is %d ",p[j],j);
            printf("%d ",j);
        }
        printf("\n");
   }


int main()
{
   int n,i,a[200],c;
   printf("enter the population:");
   scanf("%d",&n);

   printf("\nenter the amount given by each:");

   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\nenter the amount demanded:");
   scanf("%d",&c);

   int lim=pow(2,n);

   for(i=0;i<lim;i++)
    {
    if(sum(i,a,n)==c)

    print(i,a,n);

    }


    return 0;
}
