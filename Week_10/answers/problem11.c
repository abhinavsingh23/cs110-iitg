#include<stdio.h>

int main(int argc,char*argv[])
{
char c1,c2;
int nc1,nc2,i=0;

FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"r");
FILE *fp3=fopen(argv[3],"w");
fseek(fp1,0,SEEK_END);
fseek(fp2,0,SEEK_END);
nc1=ftell(fp1);
nc2=ftell(fp2);
printf("%d %d",nc1,nc2);
   while((i<nc1)&&(nc2>1))
	{
              
	  fseek(fp1,i,SEEK_SET);
           c1=fgetc(fp1);
	   fseek(fp2,nc2-2,SEEK_SET);
              c2=fgetc(fp2);
         if((c1=='\n')|| (c2=='\n') ) {break;}
           fputc(c1,fp3); 
	   fputc(c2,fp3);
		i++;
		nc2--;
 printf("\n%d %d %c %c\n",i,nc2,c1,c2);
	}

printf("\n%d %d",nc1,nc2);


while(i<nc1){   fseek(fp1,i,SEEK_SET);
		c1=fgetc(fp1);
		if((c1=='\n') ) {break;}
		fputc(c1,fp3);
                 i++;
printf("\nHELLO F1 %c %d\n",c1,i);
             }
while(nc2>1){   
		fseek(fp2,nc2-2,SEEK_SET);
		 c2=fgetc(fp2);
		fputc(c2,fp3);
                   nc2-- ;  
printf("\nHELLO F2 %c %d\n",c2,nc2);                   
}

fclose(fp1);
fclose(fp2);
fclose(fp3);

return 0;
}
