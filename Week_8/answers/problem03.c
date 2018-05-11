#include<stdio.h>


int fib(int k)
{
if(k==0)
	return 0;
else if(k==1)
	return 1;
else
	return (fib(k-1)+fib(k-2));
	
}



int main()
{
int k;
printf("enter the value of k: ");
scanf("%d",&k);
if(k==1){
	 printf("1st fibonacii digit is: 0\n");
 		return 0;
	}
if(k==2){ 
	 printf("2nd fibonacii digit is: 1\n");
		return 0;
	}

printf("%dth fibonocii digit is: %d\n",k,fib(k+1));
return 0;
}
