#include<stdio.h>

int amount[8]={351, 400, 471, 1850, 801, 500, 531, 300};

int total(int a,int b)
{
	if(a==b)
	      return(amount[a]);
	else
	     return(amount[a]+total(a+1,b)); 
}

int maxy(int l, int r)
{
 if(l==r)
	return(amount[l]);

int aa = amount[l]+total(l+1,r)-maxy(l+1,r);
int bb = amount[r]+total(l,r-1)-maxy(l,r-1);

return(aa>bb?aa:bb);
}

int main()
{
printf("best value=%d",maxy(0,7));

return 0;
}
