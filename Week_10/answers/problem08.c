#include<stdio.h>

int main(int argc,char *argv[]){
char c;
int i=0;
FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"w");

while((c=fgetc(fp1))!=EOF)
   { 
             
       if(c=='\n'){
           fprintf(fp2," %d",++i);
		fputc(c,fp2);
	    }
       else  fputc(c,fp2);
   }

fseek(fp2,-1L,SEEK_CUR);
fprintf(fp2," ");
fclose(fp1);
fclose(fp2);
return 0;
}
