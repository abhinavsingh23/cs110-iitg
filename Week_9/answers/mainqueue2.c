#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include "queue.h"

int main(void){
	struct student{
		int rno;
		char * name;
	}comm[5],*temp,tempstruct[100];
	temp=(struct student *) malloc (sizeof(struct student));
	int sizecomm=0,sizeoQ=0;
	int count=0;
	int takeinput=1;
	char Qgender[7],gender[7];
	int i;
	void *theQ;
	theQ=mkQueue();
	
	while(takeinput==1){
		tempstruct[count].name= (char *) malloc (sizeof(char)*20);
		scanf("%d",&(tempstruct[count].rno));
		scanf("%s",tempstruct[count].name);
		scanf("%s",gender);
		sizeoQ=sizeQ(theQ);
		if(tempstruct[count].rno!=0){
			if(sizeoQ==0 && sizecomm==0){
				if(strcmp(gender,"Female")){
					strcpy(Qgender,"Female");
				}
				else{
					strcpy(Qgender,"Male");
				}
			}
			printf("Qgender=%s",Qgender);		
			if(sizecomm<3){
				// attaching the input to either Q or array
				if(strcmp(gender,Qgender)){
					comm[sizecomm]=tempstruct[count];
					sizecomm++;
					printf("added to comm");
				}
				else{
					joinQ(theQ,&(tempstruct[count]));
					count++;
					printf("added to Q");
				}
			}
			else{
				if(strcmp(gender,Qgender)){
					sizeoQ=sizeQ(theQ);
					if(sizeoQ!=0){
			
						assert(sizeoQ==1);
						temp=leaveQ(theQ);
						count++;//in case
					}
					for(i=0;i<sizecomm;i++){
						count++;
						tempstruct[count]=comm[i];
						printf("pushed %s into Q\n",tempstruct[count].name);
						joinQ(theQ,&tempstruct[count]);
						
					}
					if(sizeoQ!=0){
						comm[0]=*temp;
						sizecomm=1;
					}
					else{
						sizecomm=0;
					}
					printf("WHile swapping added %s",tempstruct[count-i].name);
					int j;
					//for(j=0;j<count;j++) printf("%s\n",tempstruct[count-i-1].name);
					joinQ(theQ,&tempstruct[count-i]);
					count++;	
					strcpy(Qgender,gender);
					//printf("swapped and added to Q and sizecomm=%d",sizecomm);
				}
				else{
					joinQ(theQ,&(tempstruct[count]));
					count++;
					//printf("added to Q");
				}	

			}

			sizeoQ=sizeQ(theQ);
			if(sizeoQ+sizecomm>=5 && (sizecomm==2 || sizecomm==3)){
				while(sizecomm<5){
					//printf("initializing temp\n");
					temp=leaveQ(theQ);
					//printf("leftQ\n");
					
					comm[sizecomm]=*temp;
					sizecomm++;
				}
				for(i=0;i<5;i++){
					printf("\n\n%s\n",comm[i].name);
				}
				printf("\n \n");
				sizecomm=0;
			}
		}
		else{
			takeinput=0;
		}
	}
					

			
	return(0);
}
