#include "list.h"
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(void){
	struct rectangles{
		int l;
		int b;
	}r1,r2,r3,*r;
	void * list;
	list=mkList();
	r1.l=10;
	r1.b=40;
	insert(list,&r1,19);
	r=first(list);
	if(r->l!=10 || r1.b!=40){
		printf("first chutiya hai\n");
		return 1;
	}
	r2.l=100;
	r2.b=50;
	r3.l=200;
	r3.b=200;
	
	insert(list,&r1,19);
	insert(list,&r2,17);
	
	r=first(list);
	if(r->l!=100 && r->b!=50){
		printf("first chutiya hai");
		return 1;
	}
	r=first(list);
	if(r->l!=10 || r1.b!=40){
		printf("first chutiya hai\n");
		return 1;
	}

	insert(list,&r1,10);
	insert(list,&r3,5);
	
	r=Remove(list,5);
	if(r->l!=200 || r->b!=200){
		printf("remove chutiya hai\n");
		return 1;
	}

	return(0);
}
