#include<stdio.h>

int main(int argc,char*argv[])
{
char c1,c2;
int nc1,nc2;

FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"r");
FILE *fp3=fopen(argv[3],"w");


   while(((c1=fgetc(fp1))!=EOF)&&(((c2=fgetc(fp2))!=EOF)))
	{
           fputc(c1,fp3); 
	   fputc(c2,fp3); 
	}
while((c1=fgetc(fp1))!=EOF)
		fputc(c1,fp3);
while((c2=fgetc(fp2))!=EOF)
		fputc(c2,fp3);

fclose(fp1);
fclose(fp2);
fclose(fp3);

return 0;
}
