#include<stdio.h>
int acker(int x,int y)
{
if(x==0 && y!=0) return(y+1);

else if(y==0 && x!=0) return (acker(x-1,1));

if(x==0 && y==0)

	return 0;

else if(x>0&&y>0)

   return acker((x-1),acker(x,y-1));

}


int main()
{
int x,y;
printf("enter the value of x and y:");
scanf("%d %d",&x,&y);
if(x<0&&y<0||x<0)
{
printf("invalid input\n");
  return 0;
}else
printf("the value of ackerman function is: %d\n",acker(x,y));
return 0;
}
