#include<stdio.h>

int main(int argc,char *argv[]){
char c;
FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"w");

while((c=fgetc(fp1))!=EOF)
   { 
                  
       if(c==' '||c=='\n')
           fprintf(fp2,":");
         fputc(c,fp2);
   }
fclose(fp1);
fclose(fp2);
return 0;
}
