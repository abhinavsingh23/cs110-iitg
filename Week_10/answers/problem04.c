#include<stdio.h>

int main(int argc,char *argv[])
{
 char c;
 int nc=0,max=0;
 FILE *fp1=fopen(argv[1],"r");
 FILE *fp2=fopen(argv[2],"w");
// our sentence is Nob and nobility
 while((c=fgetc(fp1))!=EOF)
	{     nc++;
	     if(c=='\n')
            {
		if(nc>=max) max=nc;
		nc=0;   
            }
}
fprintf(fp2,"%d",max-1);
fclose(fp1);
fclose(fp2);
return 0;
}
