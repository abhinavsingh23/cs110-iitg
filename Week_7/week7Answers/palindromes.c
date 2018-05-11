#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int validPal(char *ptr){
int i,len;
len=strlen(ptr);

for(i=0;i<=len/2;i++){

    if(*(ptr+i)!=(*(ptr+len-i-1)))
        return 0;
}
return (1);


}

int validPath(int bin[20],int x,int y){

int i,count=0;
    for(i=0;i<x+y;i++){

        if(bin[i]==1){
            count++;
        }

    }
    if(count==x)
        return (1);
    else
        return (0);

}

int main(){
    int m,n,i,j;
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("enter the number of coloumn:");
    scanf("%d",&n);
    char a[m][n];

    printf("enter your strings\n");

    for(i=0;i<m;i++){
            for(j=0;j<n;j++){

            scanf(" %c",&a[i][j]);

        }
    }
    //printing the strings
printf("you entered:\n");
    for(i=0;i<m;i++){

            for(j=0;j<n;j++){

        printf("%c ",a[i][j]);

            }
    }
    printf("\n");
int x=m-1;
int y=n-1;
int bin[20];
char test[20];
int row,col;
int palin=0;
int counter=0;
int lim=pow(2,x+y);
test[0]=a[x][y];
test[x+y+1]='\0';

for(row=x,col=y,i=0;i<lim;i++){

    int k=i;
    for(j=x+y-1;j>=0;j--){

        bin[j]=k%2;
        k=k/2;
       // printf("bin[%d] is %d\n",j,bin[j]);

    }
    if(validPath(bin,x,y)){
        counter++;
        for(row=x,col=y,j=0;j<x+y;j++)
        {
            if(bin[j]==1){
                row--;
            }
            else{
                col--;
            }
        test[j+1]=a[row][col];
        //printf("row=%d col=%d char=%c\n",row,col,a[row][col]);
        }

        if(validPal(test)){
            palin++;
        printf("required outputs: %s\n",test);

        }
    }
}
printf("no of palin=%d and number of nonPalin=%d",palin,(counter-palin));

return 0;
}
