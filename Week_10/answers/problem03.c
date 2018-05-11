#include<stdio.h>

int main(void)
{
 char c;
int max=0;
int nc;
 FILE *fp1=fopen("a.txt","r");
 FILE *fp2=fopen("b.txt","w");



// our sentence is Nob and nobility
 while((c=fgetc(fp1))!=EOF)
	{    nc++;
//fprintf(fp2,"%d\n",nc);

	     if(c==' '||c=='\n')
            {  
		if(nc>=max)
		 max=nc;   //fprintf(fp2,"%d\n",max); 
       nc=0;
            }
}
fprintf(fp2,"%d",max-1);
fclose(fp1);
fclose(fp2);
return 0;
}
