
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char IDIOM[20],idiom[40000][20],a[20];
	int len,len2,i=0,n=0,j=0,m,k[100],l=0;
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\code.txt","r");
	 if((fp = fopen("C:\\Users\\Administrator\\Desktop\\code.txt","r")) == NULL)
 	{
 		perror("fail to read");
 		exit (1);} 
 	 while(fgets(IDIOM,20,fp) != NULL)
 	{
 		len = strlen(IDIOM);
 		IDIOM[len-1] = '\0';  /*È¥µô»»ÐÐ·û*/
 		for(j=0;j<len;j++)
 			idiom[n][j]=IDIOM[j];
 		//if(idiom[n][0]==a[len2-2] &&a[len2-1]==idiom[n][1])
 		//	printf("%s \n",idiom[n]); 
 		n++;
 		}
 	printf("PLEASE INPUT THE IDIOM:\n");
	while(1)
	{
	scanf("%s",a);
 	len2 = strlen(a);
 	//printf("%c%c \n",a[len2-2],a[len2-1]);
 		for(i=0;i<n;i++)
		{
			for(j=0;j<len2;j++)
			{
				if(idiom[i][j]!=a[j])
					break;
			}
			if(j==len2)
				break;
			}
		 if(i==n)
		 {
	 		printf("COMPUTER WIN!\nPLEASE PLAY AGIN\nPLEASE INPUT THE NEW IDIOM:\n");
	 		continue;
			 }	
	 		
 		for(j=0;j<n;j++)
		 {
			if(idiom[j][0]==a[len2-2] && a[len2-1]==idiom[j][1])
			{
				printf("COMP IDIOM:%s \nYOUR IDIOM:",idiom[j]);
				continue;
				} 	 	
	 		} 
		} 

  	return 0;
	
 }