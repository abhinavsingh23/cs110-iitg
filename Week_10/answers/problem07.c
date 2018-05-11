#include<stdio.h>

int main(int argc,char *argv[]){
char c;
int i=0;
FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"w");
fprintf(fp2,"%d ",++i);
while((c=fgetc(fp1))!=EOF)
   { 
             
       if(c=='\n'){
	    fputc(c,fp2);
		
           fprintf(fp2,"%d ",++i);
		
	    }
       else  fputc(c,fp2);
   }

fseek(fp2,-2L,SEEK_CUR);
fprintf(fp2," ");
fclose(fp1);
fclose(fp2);
return 0;
}
