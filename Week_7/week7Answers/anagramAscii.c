#include<stdio.h>
#include<string.h>

int main()
{
int n,i,j;
printf("enter the number of words:");
scanf("%d",&n);

char word[n][30];

for(i=0;i<n;i++)
    scanf("%s",word[i]);
    for(i=0;i<n;i++)
printf("your words are: %s\n",word[i]);
int count[30]={0};
int c=0;
for(i=0;i<n;i++)
    {

    for(j=0;word[i][j]!='\0';j++)
        {
        count[i]=count[i]+word[i][j];

        }
        printf("count[%d] is %d\n",i,count[i]);
    }
   int  a[30]={0};
    for(i=0;i<n;i++)
        {
        if(count[0]==count[i+1])
            {

           c++;
           a[i+1]=1;
         }
        }
        if(c!=0){
        printf("%d\n",c+1);
        printf("%s\n",word[0]);
        }
        for(i=1;i<n;i++)
            {
            if(a[i]==1)
            printf("%s\n",word[i]);
            }

return 0;
}
