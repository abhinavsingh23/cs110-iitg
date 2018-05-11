#include<stdio.h>

int main()
{
	int c,r;

	scanf("%d %d",&r,&c);

	int banks[r][c];

	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%d",&banks[i][j]);
		}
	}

	int test,x,y;
	
	scanf("%d %d %d",&test,&x,&y);

	int sum = 0;

	if(test == 0)
	{
		int possiblity[4][2] = {{x+1,y+1},{x+1,y-1},{x-1,y-1},{x-1,y+1}};

		for(int i = 0; i < 4; i++)
		{
			if(possiblity[i][0] >=0 && possiblity[i][0] < r && possiblity[i][1] >= 0 && possiblity[i][1] < c)
			{
				sum += 	banks[possiblity[i][0]][possiblity[i][1]];
			}
		}
	}
	else if(test == 1)
	{
		int possiblity[12][2] = {{x-1,y+2},{x-2,y+1},{x+1,y+2},{x+2,y+1},{x+1,y-2},{x+2,y-1},{x-1,y-2},{x-2,y-1},{x,y+1},{x+1,y},{x-1,y},{x,y-1}};

		for(int i = 0; i < 12; i++)
		{
			if(possiblity[i][0] >=0 && possiblity[i][0] < r && possiblity[i][1] >= 0 && possiblity[i][1] < c)
			{
				sum += 	banks[possiblity[i][0]][possiblity[i][1]];
			}
		}
	}

	printf("%d\n",sum);
	

}
