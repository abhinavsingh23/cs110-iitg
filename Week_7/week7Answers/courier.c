#include<stdio.h>
#include<string.h>

int isvalidpt(int i,int j,int s,int h,int d){
	int xdiff,ydiff;
	xdiff= i>=s? i-s:s-i;
	ydiff= j>=h? j-h:h-j;
	if( xdiff<=d && ydiff<=d && (xdiff==d || ydiff==d)){
		return(1);
	}
	else{
		return(0);
	}
}





int main(void){
	int S,H;
	int q,i,j,s,h,d;
	printf("enter number of streets and houses in each street\n");
	scanf("%d %d",&S,&H);
	 
	int packages[20][30];
	printf("\n Enter the number of packages\n");
	for(i=0;i<S;i++){
		for(j=0;j<H;j++){
			scanf("%d",&packages[i][j]);
			getchar();
		}
		printf("\n");
	}
	
	int Q;
	printf("\nEnter the number of questions\n");
	scanf("%d",&Q);
	int Qarray[60][3];
	printf("\nEnter the questions\n");
	for(i=0;i<Q;i++){
		for(j=0;j<3;j++){
			scanf("%d",&Qarray[i][j]);
			getchar();
		}
		printf("\n");
	}

	int npackages;

	for(q=0;q<Q;q++){
		d=Qarray[q][0];// allowed distance
		s=Qarray[q][1];// x cordinate of question no q
		h=Qarray[q][2];

		for(npackages=0,i=0;i<S;i++){			
			for(j=0;j<H;j++){
				if(isvalidpt(i,j,s,h,d)){
					npackages=npackages+packages[i][j];
				}
			}
		}
		printf("%d. %d\n",q+1,npackages);
	}
	
	return(0);
}
