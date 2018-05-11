    #include<stdio.h>
    #include<stdlib.h>

    #define n 8

    int solve(int,int,int);
    int nextx(int ,int);
    int nexty(int,int);
    void print(void);


    int grid[n][n]={0};

    int main()
    {
    print();
    printf("\n\n");
    solve(0,4,1);
    print();

    return 0;
    }
    long int count=0;
    int solve(int x,int y,int number)
    {
      if(number>(n*n)) return 1;
      int  move=0;
      
      if(grid[x][y]==0)
      {
            while(move<8)
            {
                if((nextx(x,move)!=-1)&&(nexty(y,move)!=-1))
                   {     
                           if((count%100000000)==0)
			printf("%ld\n",count);
                         count++;
                     grid[x][y]=number;

                      if(solve(nextx(x,move),nexty(y,move),number+1))
                           return 1;

                  }
                  move++;
            }
            grid[x][y]=0;
      }

       return 0;

    }

    int nextx(int x,int move)
    {
    if(move==0) x=x+1;
    else if(move==1) x=x+2;
    else if(move==2) x=x+2;
    else if(move==3) x=x+1;
    else if(move==4) x=x-1;
    else if(move==5) x=x-2;
    else if(move==6) x=x-2;
    else if(move==7) x=x-1;

    if(x<0||x>(n-1))
        return (-1);
    else

       return(x);

    }
    int nexty(int y,int move)
    {
    if(move==0) y=y-2;
    else if(move==1) y=y-1;
    else if(move==2) y=y+1;
    else if(move==3) y=y+2;
    else if(move==4) y=y+2;
    else if(move==5) y=y+1;
    else if(move==6) y=y-1;
    else if(move==7) y=y-2;

    if(y<0||y>(n-1))
        return (-1);
    else
    return(y);

    }

    void print(void)
    {
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     printf("%3d ",grid[i][j]);
     printf("\n");
     }

    }

