#include<stdio.h>

unsigned int add(unsigned int a, unsigned int b,unsigned int t)
{
if (t == a) return b;

return (add(a,++b,++t));
}
unsigned int mult(unsigned int a,unsigned int b,unsigned int t,unsigned int s)
{ 
  if(t==a) return b;
  
 return mult( a, (add(s,b,0)),++t,s);

}
unsigned int power(unsigned int a, unsigned int b,unsigned int t,unsigned int s)
{
if(t==b) return a;
	//printf ("\n%d",a);
	return power(mult(a,s,1,s),b,++t,s);

}


int main()
{
printf("54 + 108 = %u\n", add (54,108,0));
printf("54 * 108 = %u\n", mult (54,108,1,108));
printf("2 ^ 9 = %u\n", power (2,9,1,2));
return 0;
}
