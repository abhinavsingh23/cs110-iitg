#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalin(char *str);
void pTrace(char *str, char a[3][4], int i,int j,int n, int m);

int isPalin(char *str){

int len = strlen(str),i;

for(i=0;i<len/2;i++)
   {

    if(str[i]!=str[len-i-1])
        return (0);
}
return (1);
}
void pTrace(char *str , char a[3][4], int i, int j, int n, int m){

     if(j<m-1||i<n-1)
        {
            if(i<n-1) 

            pTrace(str+a[i][j],a,i+1,j,m,n);

            if(j<m-1)
            pTrace(str+a[i][j],a,i,j+1,m,n);
        }
     else
     {
         str=str+a[n-1][m-1];
         if(isPalin(str))
            {
              printf("%s",str);
            }
     }

}

int main(){
    //printf("enter number of coloumn and rows respectively");
    //scanf("%d %d",&m,&n);


   char a[3][4] ={ {'a' , 'a' ,'a', 'b'},
                   {'b' , 'a' ,'a', 'a'},
                   {'a' , 'b' ,'b', 'a'} } ;




    char *str = NULL;
    //printf("enter your characters");


    pTrace(str, a, 0,0, 3,4);

return 0;
}
