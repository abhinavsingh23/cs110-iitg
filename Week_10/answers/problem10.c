#include<stdio.h>

int main(int argc,char*argv[])
{
char c1,c2;
int nc1,nc2;

FILE *fp1=fopen(argv[1],"r");
FILE *fp2=fopen(argv[2],"r");
FILE *fp3=fopen(argv[3],"w");
fseek(fp1,0,SEEK_END);
fseek(fp2,0,SEEK_END);
nc1=ftell(fp1);
nc2=ftell(fp2);
printf("%d %d",nc1,nc2);
   while((nc1>1)&&(nc2>1))
	{
              
	  fseek(fp1,nc1-2,SEEK_SET);
           c1=fgetc(fp1);
	   fseek(fp2,nc2-2,SEEK_SET);
              c2=fgetc(fp2);
           fputc(c1,fp3); 
	   fputc(c2,fp3);
		nc1--;
		nc2--;
 printf("\n%d %d %c %c\n",nc1,nc2,c1,c2);
	}

printf("\n%d %d",nc1,nc2);
while(nc1>1){   fseek(fp1,nc1-2,SEEK_SET);
		c1=fgetc(fp1);
		fputc(c1,fp3);
                 nc1--;
printf("\nHELLO F1 %c\n",c1);
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
