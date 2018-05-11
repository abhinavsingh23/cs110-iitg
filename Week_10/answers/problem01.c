#include<stdio.h>

int main(int argc,char *argv[])
{
 char c,d;
 long nc;
 FILE *fp1=fopen(argv[1],"r");
 FILE *fp2=fopen(argv[2],"w");
// our sentence is Nob and nobility
 while((c=fgetc(fp1))!=EOF)
	{     
	     if(c==' '||c=='\n')
            {
		   fseek(fp1,-2L,SEEK_CUR);
		   
		   c=fgetc(fp1);
	           fputc(c,fp2);
                   fprintf(fp2,"\n");
		    c=fgetc(fp1);

            }
}
fclose(fp1);
fclose(fp2);
return 0;
}
