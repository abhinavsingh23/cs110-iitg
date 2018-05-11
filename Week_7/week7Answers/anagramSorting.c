#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
      int n;
      printf("enter the number of words:");
      scanf("%d",&n);


      char words[n][30];

      for (int i = 0; i < n; ++i)
      {
      	scanf("%s",words[i]);

      }

      char words_arr[n][30];
      for (int i = 0; i < n; ++i)
      {
      	strcpy(words_arr[i],words[i]);
      }

      for (int i = 0; i < n; ++i)
      {
          for (int j = 0; j <strlen(words_arr[i])-1 ; j++){
      	for (int k = j+1; k<strlen(words_arr[i]) ; k++)
      	{
      		if (words_arr[i][j]>words_arr[i][k])
      		{
      			char temp=words_arr[i][j];
      			words_arr[i][j]=words_arr[i][k];
      			words_arr[i][k]=temp;
      		}
      	}
    }
      	printf("\n%s\n",words_arr[i]);
      }
      int c=0;
     for (int i = 0; i < n; ++i)
 {
          int count=0;

    for(int j=i;j<n-i;j++)
    {
     	if(strcmp(words_arr[i],words_arr[i+j])==0)
      {
      	count++;
      	//temp[]

      }
    }
    printf("%d\n",count);
    if(count==1){
        c++;
        //printf("%s\n",words[i]);

    }
}

    printf("%d\n",c+1);




}
