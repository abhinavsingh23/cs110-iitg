

/*********************************************************************************
//MODULE03 exercise01
**********************************************************************************/	
	 //Getting no of elements of the array
	#include<stdio.h>

	int main()
	{
	int n;
	printf("Enter the no. of elements the array contain: ");
	scanf("%d",&n);

	
	//Getting the elements of the array
	int arr[n];
	printf("Enter the  elements of the array : ");	

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}	
	

	//Getting no of flips allowed
	int k;	
	printf("Enter the maximum number of flips allowed: ");
	scanf("%d",&k);

    int L = 0, R = 0; //Declaring left and right for constructing a gap with atmost k 1's
	int bestL = 0, bestW = 0; //Left index of current gap and lenth of widest gap
 	int one = 0; //No of one's in current gap 
 
    
	while (R < n)
 	{

		//If no of 1's in current gap is < k then widen it to the right
		if (one <= k)
       		{
            		if (arr[R] == 1)
              		{
				        one++;
			        }
        		R++;
       		}
 		
 		//If no of 1's in current gap are > k then shorten it from left    
       		if (one > k)
        	{
            		if (arr[L] == 1)
              		{
				         one--;
			        }            
			  L++;
        	}
 
      		//If current gap is bigger than widest gap then update the widest gap
      		if (R-L > bestW)
        	{
        	    	bestW = R-L;
        	    	bestL = L;
        	}
    }
 
	
	//Printing the positions of 1 flipped
	printf("The positions of 1 flipped are : ");	
	 	
	for (int i=0; i<bestW; i++)
    	{
        	if (arr[bestL+i] == 1)
           	{
			 
			 printf("%d ",bestL+i);
		    
		    }
    	}
	
	printf("\n");
/**********************************************************************************************/
MODULE03 EXERCISE02
/*******************************************************************************************/



#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n, count = 0, count1;

    printf("enter the size of array\n");
    scanf("%d", &n);

    int min = n, a[n];
    
    for (int i = 0; i < n; i++) {
	a[i] = rand() % 2;
	printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++) {
	if (a[i] == 1)
	    count++;
    }

    for (int i = 0; i < n - count + 1; i++) {
	count1 = 0;
	for (int j = i; j < i + count; j++) {
	    if (a[j] == 0) {
		count1++;
}
    if (count1 <= min) {
        min = count1;
    }
    }

    printf("%d", min);
return 0;
}

/************************************************************************************************/
module03 exercise03
/**********************************************************************************************/
#include<stdio.h>

int main()
{
	int n1,n2;

	printf("Enter no. of elements of array 1: ");
	scanf("%d",&n1);

	int arr_1[n1];
	printf("Enter the elements of array 1: ");
	
	for(int i = 0;i < n1;i++)
	{
		scanf("%d",&arr_1[i]);
	}	

	printf("Enter no. of elements of array 2: ");
	scanf("%d",&n2);

	int arr_2[n2];
	printf("Enter the elements of array 2: ");
	
	for(int i = 0;i < n2;i++)
	{
		scanf("%d",&arr_2[i]);
	}

	int count = 0;	
	
	for(int i = 0; i < n2;i++)
	{
		int set = 0;		

		for(int j = 0; j < n1; j++)
		{
			if(arr_2[i] > arr_1[j])
			{
				set++;
			}
		}

		if(set == 0)
		{
			count++;
		}
	}

	printf("No of elements of array-2 less than or equal to each elements of array-1 are %d\n", count);

	return 0;
}
/**********************************************************************************************/
EXERCISE04
/**********************************************************************************************/

#include<stdio.h>

int main()
{
	int n;

	printf("Enter no of elements in the array\n");//No of elements of array
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements of the array\n");//Getting the elements of array

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	int m;
	printf("Enter the value of m\n");//Getting m
	
	scanf("%d",&m);

	int b[n];//Declaring an new array and storing elements of array a[]
	
	for(int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}

	for(int i = 0; i < n; i++)//Sorting the new array in ascending order
	{
		for(int j = i+1; j < n;j++)
		{
			if(b[j] < b[i])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	
	for(int i = 0; i < n; i++)//Printing m smallest elements in the order of given array
	{
		for(int j = 0; j < m;j++)
		{
			if(a[i] == b[j])
			{
				printf("%d ",b[j]);
				break;
			}
		}
	}

}
/************************************************************************************************/
EXERCISE 05
/************************************************************************************************/
#include <stdio.h> 
#include<string.h> 

int main()
{
	char str[50];
	
	printf("Enter the string: ");
	scanf("%s",str);

	int n = strlen(str);
	
	int sum = 0;
	int c = 0;

	for(int i = 0; i < n; i++)
	{
		sum = sum + str[i];
	}

    for(int i = 0; i*i<=sum; i++)
	{
		if(i*i == sum)
		{
			c++;	
		}
	}

	if(c != 0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}

	return 0;
}
/************************************************************************************************/
EXERCISE06
/***********************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str1[6],str2[6];

	printf("Enter string 1(less than 7 characters)\n");
	scanf("%s",str1);
	printf("Enter string 2(less than 7 characters)\n");
	scanf("%s",str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if(len1 != len2)
	{
		printf("Enter strings of equal lengths\n");
		return 1;
	}

	int c = 0;	

	for(int i = 0; i < len1; i++)
	{
		char U1 = toupper(str1[i]);
		char U2 = toupper(str2[i]);

		if(U1 != U2)
		{
			c++;
		}
	}

	if(c == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}
}

/***********************************************************************************************
EXERCISE 07
***********************************************************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter no of elements of the array\n");
	scanf("%d",&n);

	int a[n];
	printf("Enter the elements of the array\n");

	for(int i = 0; i < n;i++)
	{
		scanf("%d",&a[i]);
	}

	int m = (n*(n-1))/2;
	
	int sum[m],k = 0;

	int b[m][2];

	for(int i = 0; i < n && k < m; i++)
	{
		for(int j = i+1; j < n && k < m; j++)
		{
			sum[k] = a[i] + a[j];
			b[k][0] = a[i];
			b[k][1] = a[j];
			k++;
		}
	}

	int min = sum[0];
	int max = sum[0];

	for(int i = 0; i < m;i++)
	{
		if(min > sum[i])
		{
			min = sum[i];
		}
		if(max < sum[i])
		{
			max = sum[i];
		}
	}

	for(int i = 0; i < m; i++)
	{
		if(sum[i] == min)
		{
			printf("A1 = {%d,%d}, ",b[i][0],b[i][1]);
			break;
		}
	}
	for(int i = 0; i < m; i++)
	{
		if(sum[i] == max)
		{
			printf("A2 = {%d,%d}, ",b[i][0],b[i][1]);
			break;
		}
	}

	printf("Max Difference = %d\n",max-min);

	return 1;
}
/************************************************************************************************/
EXERCISE08
/***********************************************************************************************/
#include<stdio.h>
int main()
{
	int sif,si,eif,ei,i,n,countA,countT;
	printf("Enter size \n" );
	scanf("%d",&n);
	char gene[n];
	scanf("%s",gene);
	int p=n;
	loop:
	for (si=0,ei=n-1;ei<p;si++,ei++)
	{
		/* code */
	    countA=0,countT=0;
		for ( i = si; i <=ei; ++i)
		{
			/* code */

			if(gene[i]=='A'){countA++;}
			if(gene[i]=='T'){countT++;}
			
		}
		if(countA==countT)
		{
			sif=si;
			eif=ei;
			goto out;
		}
		
	}
	n--;
	goto loop;
	out:
	printf("%d " "%d ",sif,eif);
	for(i=sif;i<=eif;i++)
	printf("%c ",gene[i]);


	return 0;
}
/************************************************************************************************/
EXERSISE 09
/**********************************************************************************************/
#include<stdio.h>
int main()
{
	int sif,si,eif,ei,i,n,countA,countT,countG,countC;
	printf("Enter size \n" );
	scanf("%d",&n);
	char gene[n];
	scanf("%s",gene);
	n=4;
	
	loop:
	for (si=0,ei=n-1;ei<7;si++,ei++)
	{
		/* code */
	    countA=0,countT=0,countG=0,countC=0;
		for ( i = si; i <=ei; ++i)
		{
			/* code */
			if(gene[i]=='A'){countA++;}
			if(gene[i]=='T'){countT++;}
			if(gene[i]=='G'){countG++;}
			if(gene[i]=='C'){countC++;}
		}
		if(!(countA>1 || countT>1 || countC>1 || countG>1))
		{
			sif=si;
			eif=ei;
			printf("%d " "%d ",sif,eif);
	for(i=sif;i<=eif;i++)
	printf("%c ",gene[i]);
	printf("\n");
		}
		
	}
	n--;
	if(n==1){return 0;}
	goto loop;
	//out:
	


	return 0;
}
/*************************************************************************************************/
EXERCISE 10
/*************************************************************************************************/
#include<stdio.h>
#include<string.h>

int main(){

char str[100];
printf("enter the string:");
scanf("%s",str);

int n=strlen(str);
int count = 0;
int freq[n];

//calculating the frequency of an element

for(int i=1;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
                count++;
        }

    freq[i]=count;
    count=0;
    //printf("%d\n",freq[i]);

}
//sorting frequency array along with string
int temp;
char str_temp;
for(int k=1;k<n;k++){
        for(int j=0;j<n;j++)
        {
        if(freq[j]<freq[j+1])
        {

            temp=freq[j];
            freq[j]=freq[j+1];
            freq[j+1]=temp;
        //swap string as well
       str_temp=str[j];
        str[j]=str[j+1];
        str[j+1]=str_temp;
        }
        if(freq[j]==freq[j+1]){
            if(str[j+1]<str[j])
            {
                 //swap string as well
        str_temp=str[j];
        str[j]=str[j+1];
        str[j+1]=str_temp;
            }
        }

    }
}

//copying the string into new string
char snew[100];
int j=0;

for(int i=0;str[i]!='\0';i++){

    if(freq[i]!=1){

        snew[j]=str[i];
        j++;
        i=i+freq[i]-1;
        }
        else{
            snew[j]=str[i];
            j++;
        }

}
snew[j]='\0';

printf("%s",snew);

 return 0;
}
/***********************************************************************************************/



 	
	

