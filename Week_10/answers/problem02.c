#include<stdio.h>

int main(int argc,char *argv[])
{
 char c;
 //long nc;
 FILE *fp1=fopen(argv[1],"r");
 FILE *fp2=fopen(argv[2],"w");

c=fgetc(fp1);
fputc(c,fp2);
fprintf(fp2,"\n");
// our sentence is Nob and nobility
 while((c=fgetc(fp1))!=EOF)
	{    //nc=ftell(fp1); 


	     if(c==' '||c=='\n')
            {      

		   c=fgetc(fp1);//after reading it increases by one character so we will get character just after ' '
			if(c==EOF) { break; }
	           fputc(c,fp2);
                   fprintf(fp2,"\n");
		   
	           //printf("%ld ",nc);
            }
}
fclose(fp1);
fclose(fp2);
return 0;
}
