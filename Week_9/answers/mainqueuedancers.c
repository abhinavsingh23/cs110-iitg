#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include "queue.h"

int main(void){
	struct dancers{
		int rno;
		char * name;
	}tempstruct[100],*male,*female;
	
	
	male= (struct dancers *) malloc(sizeof(struct dancers));
	//male->name=(char *) malloc(sizeof(char)*100);
	female= (struct dancers *) malloc(sizeof(struct dancers));
	//female->name=(char *) malloc(sizeof(char)*100);
	void  *males,*females;
	
	char gender[10000];
	males=mkQueue();
	females=mkQueue();
	
	int takeinput=1;
	int count=0;
	printf("Enter the names\n");
	while(takeinput==1){
		//printf("enter rno\n");
		
		tempstruct[count].name=(char *) malloc(sizeof(char)*100);
		scanf("%d",&(tempstruct[count].rno));
		//getchar();
		//printf("enter name\n");
		scanf("%s",tempstruct[count].name);
		//printf("%d\n",tempstruct[count].rno);
		//printf("enter gender\n");
		//getchar();
		scanf("%s",gender);
		//printf("%s\n",gender);
		//getchar();
				
		if((tempstruct[count].rno) !=0){
			if(strcmp(gender,"Female")){
				//printf("%s\n",tempstruct[count].name);
				//printf("added to males\n");
				joinQ(males,&tempstruct[count]);
				count++;
			}
			else{
				//printf("%s\n",tempstruct[count].name);
				//printf("added to females\n");
				joinQ(females,&tempstruct[count]);
				count++;
			}
		}
		else{
			assert(tempstruct[count].rno==0);
			takeinput=0;
		}
	}
	//printf("took input");
	int sizem,sizef;
	sizem=sizeQ(males);
	sizef=sizeQ(females);
	if(sizem!=sizef){
		printf("wrong input; sizem=%d sizef=%d\n",sizem,sizef);
		return(1);
	}
	//printf("right input; sizem=%d sizef=%d\n",sizem,sizef);
	
	int i;
	for(i=1;i<=sizem;i++){
		//printf("fetching male\n");
		male=leaveQ(males);
		printf("%d.%s",i,male->name);
		//printf("fetching female\n");
		female=leaveQ(females);
		printf(" %s",female->name);
			
		
		
		printf("\n");
		
	}
	
	
	
	return(0);
}
