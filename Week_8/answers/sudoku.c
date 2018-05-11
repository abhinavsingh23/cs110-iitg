#include <stdio.h>
#include <stdlib.h>

 int isavailable(int puzzle[9][9],int row,int col, int num)
 {
 int rowstart=(row/3)*3;
 int colstart=(col/3)*3;
 int i;
 for(i=0;i<9;++i){
 if(puzzle[row][i]==num) return 0;
 if(puzzle[i][col]==num) return 0;
 if(puzzle[rowstart+(i%3)][colstart+(i%3)]==num) return 0;
 }
 return 1;
 }

int fillsudoku(int puzzle[][9],int row,int col)
{
    int i;
if(row<9&&col<9)
  {
        if(puzzle[row][col]!=0)
        {
         if((col+1)<9) return fillsudoku(puzzle,row,col+1);
         else if((row+1)<9) return fillsudoku(puzzle,row+1,0);
         else return 1;
        }
else
     {
        for(i=0;i<9;++i)
         {
            if(isavailable(puzzle,row,col,i+1))
             {
                puzzle[row][col]=i+1;
                if((col+1)<9)
                   {
                    if(fillsudoku(puzzle,row,col+1)) return 1;
                    else puzzle[row][col]=0;
                   }
                    else if((row+1)<9)
                    {
                    if(fillsudoku(puzzle,row+1,0)) return 1;
                    else puzzle[row][col]=0;
                    }
                    else return 1;
               }

            }

        }
         return 0;
     }
      else return 1;
}

int main()
{
int i,j;
int puzzle[9][9]={0};
if(fillsudoku(puzzle,0,0))
{
    printf("\n");
    for(i=1;i<10;++i)
    {
        for(j=1;j<10;++j) printf(" %d",puzzle[i-1][j-1]);
        printf("\n");
    }

}
else printf("NO SOLUTION\n\n");
return 0;
}

