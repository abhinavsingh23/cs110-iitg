#include<stdio.h>
#include<math.h>

#define N 4

int rpt[10]={0};
int val[10]={0,2,4,9,8,3,1,9,6,7};

int Check(char word[N][10], char occ[10], int occ_len);
int String(char word[N][10], char occ[10], int occ_len, int no);

int main(void)
{
    char word[N][10]={"TWO","THREE","SEVEN","TWELVE"};
    int i,j,k;
    for (i=0; i<N; i++)
        printf("%s\n",word[i]);

    int occ_len=0;
    char occ[10];
    for (i=0; i<N; i++)
        for (j=0; word[i][j]!='\0'; j++)
        {
            for (k=0; k<occ_len; k++)
                if (occ[k]==word[i][j])
                    break;
            if (k==occ_len)
                occ[occ_len++]=word[i][j];
        }
    for (i=0; i<occ_len; i++)
        printf("%c ",occ[i]);

    printf("\n%d\n",Check(word,occ,occ_len));

    for (i=0; i<10; i++)
    {
        val[0]=i;
        rpt[i]=1;
        //printf("%d",rpt[0]);
        for (j=0; j<10; j++)
        {
            if (rpt[j]!=0)
                continue;
            rpt[j]=1;
            val[1]=j;
            String(word,occ,occ_len,1);
            rpt[j]=0;
            val[1]=-1;
        }
        rpt[i]=0;
        val[0]=-1;
    }
    return 0;
}

int String(char word[N][10], char occ[10], int occ_len, int no)
{
    int i,j,flag=-1,success;
    if (no==occ_len-1)
        flag=Check(word,occ,occ_len);
    if (flag==1)
    {
        printf("\n\n");
        for (i=0; i<occ_len; i++)
            printf("%c %d   ",occ[i],val[i]);
        return 0;
    }
    else if (flag==0)
        return 0;

    printf("\n\n");
    for (i=0; i<occ_len; i++)
            printf("%c %d  ",occ[i],val[i]);
    for (i=0; i<10; i++)
    {
        if (rpt[i]!=0)
            continue;
        rpt[i]=1;
        val[no+1]=i;
        success=String(word,occ,occ_len,no+1);
        if (success==1)
            return 0;
        rpt[i]=0;
        val[no+1]=-1;
    }
    return 0;
}


int Check(char word[N][10], char occ[10], int occ_len)
{
    int i,j,k,l,len,sum=0,temp;
    for (i=0; i<N-1; i++)
    {
        for (len=0; word[i][len]!='\0'; len++);
        //printf("\n\t%d\t",len);
        //sum =0 ;
        for (j=0; j<=len; j++)
        {
            temp=1;
            for (k=0; k<occ_len; k++)
                if (word[i][j]==occ[k])
                {
                    //printf("%c %d  ",occ[k],val[k]);
                    for (l=0; l<len-j-1; l++)
                        temp*=10;
                    //if (len-j-1 > 0)
                        sum += val[k]*temp;
                    //else
                        //sum += val[k];
                }
        }
        //printf("\nCurrent Sum: %d",sum);
    }
    //printf("\nCurrent Sum: %d",sum);

    temp=0;
    for (len=0; word[N-1][len]!='\0'; len++);
    for (i=len-1; i>=0; i--)
    {
        for (j=0; j<occ_len; j++)
            if (word[N-1][i]==occ[j])
            {
                temp = sum%10;
                //printf("%c %d %d",occ[j],temp,val[j]);
                if (val[j]!=temp)
                    return 0;
                sum/=10;
            }
    }
    return 1;
}
